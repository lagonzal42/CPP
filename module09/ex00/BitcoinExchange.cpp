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

	while (std::getline(dataIn, line))
	{
		std::stringstream	ss;(line);
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

	for (int i = 0; i < value.size(); i++)
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
		return false;
    for (int i = 0; i < date.size(); ++i)
	{
        if (i == 4 || i == 7) 
		{
            if (date[i] != '-')
				return false;
        } 
		else 
		{
            if (!isdigit(date[i]))
				return false;
        }
    }
    return true;
}






void    BitcoinExchange::exchange(std::string inputPath)
{
	if (createDB())
		return ;

	std::string line, date, amount;
	std::ifstream inputFile(inputPath);
	while (std::getline(inputFile, line))
	{
		std::stringstream	ss;(line);
		std::getline(ss, date, '|');
		std::getline(ss, amount, '|');
		
		double numValue = std::atof(amount.c_str());
		
		if (DEBUG)
			std::cout << "Input date is " << date << " value is " << amount << std::endl;
		if (line == "date | value ")
		;
		else if (line[11] != '|')
			std::cout << "Error: bad input => " << line << std::endl;
		else if (BitcoinExchange::checkDateFormat(date))
			std::cerr << "Error: date is wrong" << date << std::endl;
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
