/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:18 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/12 17:04:44 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

//ScalarConverter&    ScalarConverter::operator=(const ScalarConverter& p);

int checkType(std::string &str)
{
	if (isPseudo(str))
		return (PSEUDO);
	if (numberFormat(str))
	{
		if (isInt(str))
			return (INTEG);
		else if (isFloat(str))
			return (FLOAT);
		else // if(isDouble(str))
			return (DOUBLE);
	}
	else if (isChar(str))
		return (CHARAC);
	return (4);
}

bool	isPseudo(std::string &str)
{
	return (str == "+inff" || str == "-inff" || str == "+inf" 
			|| str == "-inf" || str == "nan" || str == "nanf");
}

bool	isChar(std::string &str)
{
	return(str.length() == 1);
}

bool	isInt(std::string &str)
{
	size_t found = str.find('.');
	
	if (found != std::string::npos)
		return (false);
	return (true);
}

bool	isFloat(std::string &str)
{
	size_t found = str.find('f');

	if (found != std::string::npos)
		return (true);
	return (false);
}

bool	isDouble(std::string&)
{
	return (true);
}

bool	numberFormat(std::string &str)
{
	bool point, f = false;

	if (str[str.length() - 1] == 'f')
		f = true;
	for (size_t i = 0; i < str.length() - 1; i++)
	{
		if (!std::isdigit(str[i]) && str[i] != '.')
		{
			if (DEBUG)
				std::cout << "The number had something thats not a point nor digit" << std::endl;
			return (false);
		}
		else if (str[i] == '.')
		{
			if (point)
			{
				if (DEBUG)
					std::cout << "The number had two points" << std::endl;
				return (false);
			}
			point = true;
		}
	}
	if (f && !point)
	{
		if (DEBUG)
			std::cout << "the number had the floating point mark but no f" << std::endl;
		return (false);
	}
	return (true);
}

bool ScalarConverter::convert(std::string &str)
{
	int 	type = checkType(str);
	char	c;
	int		i;
	float	f;
	double	d;
    std::istringstream iss(str);

	switch(type)
	{
		case(PSEUDO):
			if (DEBUG)
				std::cout << "Pseudo literal detected" << std::endl;
			std::cout << "char: imposible" << std::endl;
			std::cout << "int: imposible" << std::endl;
			std::cout << "float: " << str;
			if (str == "+inf" || str == "-inf" || str == "nan")
				std::cout << "f" << std::endl;
			else
				std::cout << std::endl;
			if (str == "+inff" || str == "-inff" || str == "nanf")
				str[3] = '\0';
			std::cout << "double: " << str << std::endl;
			return (true);
		
		
		case (CHARAC):
			if (DEBUG)
				std::cout << "Character detected" << std::endl;
			iss >> c;
			std::cout << "char: " << c << std::endl;
			std::cout << "int: " << static_cast<int>(c) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
			return (true);
		
		
		case(INTEG):
			if (DEBUG)
				std::cout << "Integer detected" << std::endl;
			iss >> i;
			if (i > 255 || i < -256)
				std::cout << "char: imposible" << std::endl;
			else if (static_cast<char>(i) < 33 || static_cast<char>(i) > 126)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(i) << std::endl;
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(5) << static_cast<float>(i) << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(5) << static_cast<double>(i) << std::endl;
			return (true);
		
		
		case(FLOAT):
			if (DEBUG)
				std::cout << "Float detected" << std::endl;
			f = std::atof(str.c_str());
			if (static_cast<int>(f) > 255 || static_cast<int>(f) < -256)
				std::cout << "char: imposible" << std::endl;
			else if (static_cast<char>(f) < 33 || static_cast<char>(f) > 126)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(f) << std::endl;
			std::cout << "float "  << f << std::endl;
			std::cout << "int: " << (int)(f) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(5) << f << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(5) << static_cast<double>(f) << std::endl;
			return (true);
		
		
		case(DOUBLE):
			if (DEBUG)
				std::cout << "Double detected" << std::endl;
			iss >> d;
			if (static_cast<int>(d) > 255 || static_cast<int>(d) < -256)
				std::cout << "char: imposible" << std::endl;
			else if (static_cast<char>(d) < 33 || static_cast<char>(d) > 126)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(d) << std::endl;
			std::cout << "int: " << static_cast<int>(d) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(5) << static_cast<float>(d) << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(5) << d << std::endl;
			return (true);
		
		
		default:
			std::cout << "The introduced type was not a literal nor pseudoliteral" << std::endl;
			return (false);
	}
}

