#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange&)
{}

const BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& p)
{return p;}

BitcoinExchange::~BitcoinExchange(void)
{}

bool    BitcoinExchange::createDB(void)
{
	std::ifstream	dataIn("data.csv");
	std::string		line, date, value;


	if (!dataIn)
	{
		std::cerr << "Error while opening data.csv" << std::endl;
		return (1);
	}
	std::getline(dataIn, line);
	if (line != "date,exchange_rate")
	{
		std::cerr << "Error in line " << line << std::endl;
		return (1);
	}
	while (std::getline(dataIn, line))
	{
		std::stringstream	ss(line);
		std::getline(ss, date, ',');
		std::getline(ss, value, ',');
		
		if (DEBUG)	
			std::cout << "date is " << date << " value is " << value << std::endl;
		if (line[10] != ',')
		{
			std::cout << "Error in data format in line " << line << std::endl;
			return (1);
		}
		if (BitcoinExchange::checkDateFormat(date))
		{
			std::cerr << "date format is wrong in data.csv " << date << std::endl;
			return (1);
		}
		
		double numValue = std::atof(value.c_str());
		
		if (numValue < 0 || BitcoinExchange::checkNumFormat(value))
		{
			std::cerr << "The value is negative or the format is not correct in " << date << std::endl;
			return (1);
		}
		_db[date] = numValue;
	}
	return (0);
}

bool BitcoinExchange::checkNumFormat(const std::string& value)
{
	bool point = false;

	for (size_t i = 0; i < value.size(); i++)
	{
		if (!std::isdigit(value[i]))
		{
			if (value[i] != '.')
				return (1);
			else
				point = true;
		} 
	}
	return (0);
}

bool BitcoinExchange::checkDateFormat(const std::string& date)
{
    if (date.size() != 10)
		return (true);
    for (size_t i = 0; i < date.size(); ++i)
	{
        if (i == 4 || i == 7) 
		{
            if (date[i] != '-')
				return (true);
        } 
		else 
		{
            if (!isdigit(date[i]))
				return (true);
        }
    }
	std::string year, month, day;
	std::stringstream ss(date);
	std::getline(ss, year, '-');
	std::getline(ss, month, '-');
	std::getline(ss, day, '-');
	if (month > "12")
		return (true);
	if ((day > "30" && (month != "01" && month != "03" && month != "05" && month != "07" && month != "08" && month != "10" && month != "12"))
		|| (day > "28" && month == "02" && std::atoi(year.c_str()) % 4 != 0 && std::atoi(year.c_str()) % 400 != 0)
		|| (day > "29" && month == "02"))
		return (true);
	return (false);
}

void    BitcoinExchange::exchange(std::string inputPath)
{
	if (createDB())
		return ;

	std::string line, date, amount;
	std::ifstream inputFile(inputPath);
	
	std::getline(inputFile, line);
	if (line != "date | value")
	{
		std::cout << "Error in line " << line << std::endl;
		return ;
	}
	while (std::getline(inputFile, line))
	{
		std::stringstream	ss(line);
		std::getline(ss, date, '|');
		std::getline(ss, amount, '|');
		date.erase(date.find_last_not_of(" \n\t\r") + 1);
		amount.erase(0, amount.find_first_not_of(" \n\t\r"));

		double numValue = std::atof(amount.c_str());
		
		if (line[11] != '|')
			std::cerr << "Error: bad input => " << line << std::endl;
		else if (BitcoinExchange::checkDateFormat(date))
			std::cerr << "Error: date is wrong " << date << std::endl;
		else if (numValue > 1000)
			std::cerr << "Error: too large number." << std::endl;
		else if (numValue < 0 )
			std::cerr << "Error: not a positive number." << std::endl;
		else if (BitcoinExchange::checkNumFormat(amount))
			std::cerr << "Error: not a valid number." << std::endl;
		else
			std::cout << date << " => " << amount << " = " << (_db.lower_bound(date)->second * numValue) << std::endl;	
	}
}
