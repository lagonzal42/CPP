/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:18 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/16 17:26:03 by lagonzal         ###   ########.fr       */
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
	if (numberFormat(str) && str.length() != 1)
	{
		if (isInt(str))
			return (INTEG);
		else if (isFloat(str))
			return (FLOAT);
		else // if(isDouble(str))
			return (DOUBLE);
	}
	else
		return (CHARAC);
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

	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == str.length() - 1 && str[i] == 'f')
			f = true;
		else if (!std::isdigit(str[i]) && str[i] != '.')
			return (false);
		else if (str[i] == '.')
		{
			if (point)
				return (false);
			point = true;
		}
	}
	if (f && !point)
		return (false);
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
			std::cout << "float: " << str << "f" << std::endl;
			std::cout << "double: " << str << std::endl;
			return (true);
		case (CHARAC):
			if (DEBUG)
				std::cout << "Character detected" << std::endl;
			iss >> c;
			std::cout << "char: " << c << std::endl;
			std::cout << "int: " << (int) c << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << (float) c << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(1) << (double) c << std::endl;
			return (true);
		case(INTEG):
			if (DEBUG)
				std::cout << "Integer detected" << std::endl;
			iss >> i;
			if (i > 255 || i < -256)
				std::cout << "char: imposible" << std::endl;
			else if ((char)i < 33 || (char)i > 126)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << (char)i << std::endl;
			std::cout << "int: " << i << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(5) << static_cast<float>(i) << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(5) << (double) i << std::endl;
			return (true);
		case(FLOAT):
			if (DEBUG)
				std::cout << "Float detected" << std::endl;
			iss >> f;
			if ((int)f > 255 || (int)f < -256)
				std::cout << "char: imposible" << std::endl;
			else if ((char)f < 33 || (char)f > 126)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << (char)f << std::endl;
			std::cout << "int: " << (int) f << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(5) << f << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(5) << (double)f << std::endl;
			return (true);
		case(DOUBLE):
			if (DEBUG)
				std::cout << "Double detected" << std::endl;
			iss >> d;
			if ((int)d > 255 || (int)d < -256)
				std::cout << "char: imposible" << std::endl;
			if ((char)d < 33 || (char)d > 126)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << (char)d << std::endl;
			std::cout << "int: " << (int)d << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(5) << (float)d << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(5) << d << std::endl;
			return (true);
		default:
			std::cout << "The introduced type was not a literal nor pseudoliteral" << std::endl;
			return (false);
	}
}

