/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:36:05 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/13 20:38:17 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>

//default constructor

Phonebook::Phonebook(void)
{
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
	this->contactCount = 0;
}

//copy constructor

Phonebook::Phonebook(const Phonebook& param): contactCount(param.contactCount)
{
	for (int i = 0; i < param.contactCount; i++)
			this->contactList[i] = param.contactList[i];
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
}

// = operator overcharge

Phonebook& Phonebook::operator=(const Phonebook& param)
{
	std::cout << "= operator overwriting method called" << std::endl;
	if (this != &param)
	{
		for (int i = 0; i < param.contactCount; i++)
			this->contactList[i] = param.contactList[i];
	}
	this->contactCount = param.contactCount;
	return *this;
}

//default destructor

Phonebook::~Phonebook(void)
{
	if (DEBUG)
		std::cout << "Default destructor called" << std::endl;
}

//geters and seters

//other methods

void	Phonebook::print(void)
{
	std::cout << "This phonebooks information is:" << std::endl;
	std::cout << "- Contacts: " << contactCount << std::endl;
	for (int i = 0; i < contactCount; i++)
		contactList[i].print();
}

//mandatory
void	Phonebook::add(void)
{
	std::string		firstName;
	std::string 	lastName;
	std::string 	nickname;
	std::string		darkestSecret;
	std::string		stringNumber;
	unsigned int	phoneNumber;

	std::cout << "Introduce the first name" << std::endl;
	firstName = check_input();
	std::cout << "Introduce the last name" << std::endl;
	lastName = check_input();
	std::cout << "Introduce the nickname" << std::endl;
	nickname = check_input();
	std::cout << "Introduce the phone number" << std::endl;
	phoneNumber = check_phone();
	while (phoneNumber == 0)
	{
		std::cout << "Introduce the phone number" << std::endl;
		phoneNumber = std::atoi(check_input().c_str());
	}
	std::cout << "Introduce the darkest secret" << std::endl;
	darkestSecret = check_input();
	if (contactCount < ARRAY_SIZE)
		addBack(Contact(firstName, lastName, nickname, phoneNumber, darkestSecret));
	else
		moveForward(Contact(firstName, lastName, nickname, phoneNumber, darkestSecret));
}

std::string Phonebook::check_input(void)
{
	std::string input;

	std::getline(std::cin, input);
	while (1)
	{
		if (!(input).empty())
			break;
		else
		{
			std::cout << "The field cannot be empty" << std::endl;
			std::getline(std::cin, input);
		}
	}
	return (input);
}

unsigned int Phonebook::check_phone(void)
{
	std::string 	input;
	int	phone;

	std::getline(std::cin, input);
	while (1)
	{
		if (!input.empty() && isnumeric(input))
			break;
		else
		{
			std::cout << "The field cannot be empty or has characters" << std::endl;
			std::getline(std::cin, input);
		}
	}
	phone = std::atoi(input.c_str());
	if (phone < 1)
	{
		std::cout << "The input cannot be below or equal to zero" << std::endl;
		return (0);
	}
	return (phone);
}

bool	Phonebook::isnumeric(std::string str)
{
	for (int x = 0; (unsigned long) x < str.length(); x++)
	{
		if (!std::isdigit(str[x]))
			return (false);
	}
	return (true);
}

void	Phonebook::addBack(Contact pContact)
{
	contactList[contactCount] = pContact;
	contactCount += 1;
}

void	Phonebook::moveForward(Contact pContact)
{
	int	i;
	for (i = 0; i < ARRAY_SIZE - 1; i++)
		contactList[i] = contactList[i + 1];
	contactList[i] = pContact;
}

void	Phonebook::search(void)
{
	std::string	trimmed;
	std::string	in_str;
	int	input;

	if (contactCount == 0)
	{
		std::cout << "There are no contacts available" << std::endl;
		return ;
	}
	for (int i = 0; i < contactCount; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		trimmed = contactList[i].getFirstName();
		std::cout << "|" << std::setw(10) << trimmer(trimmed);
		trimmed = contactList[i].getLastName();
		std::cout << "|" << std::setw(10) << trimmer(trimmed);
		trimmed = contactList[i].getNickname();
		std::cout << "|" << std::setw(10) << trimmer(trimmed) << "|" << std::endl;
	}
	std::getline(std::cin, in_str);
	input = std::atoi(in_str.c_str());
	if (input > 7 || input < 0 || input >= contactCount - 1)
		std::cout << "Invalid input" << std::endl;
	else
		contactList[input].print();
}

std::string	Phonebook::trimmer(std::string pToTrim)
{
	std::string trimmed;

	if (pToTrim.length() <= 10)
		return (pToTrim);
	trimmed = pToTrim.substr(0, 10);
	trimmed[9] = '.';
	return (trimmed);
}
