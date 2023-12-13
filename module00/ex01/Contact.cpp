/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:35:50 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/13 20:30:48 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

//default constructor

Contact::Contact(void)
{
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}

//constructor with parameters

Contact::Contact(std::string pFirstName, std::string pLastName, std::string pNickname, 
					unsigned int pPhoneNumber, std::string pDarkestSecret)
{
	if (DEBUG)
		std::cout << "Parameter constructor called" << std::endl;
	firstName = pFirstName;
	lastName = pLastName;
	nickname = pNickname;
	phoneNumber = pPhoneNumber;
	darkestSecret = pDarkestSecret;
}

//copy constructor
Contact::Contact(const Contact& param) : firstName(param.firstName), lastName(param.lastName), 
nickname(param.nickname), phoneNumber(param.phoneNumber), darkestSecret(param.darkestSecret)
{
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
}

 Contact& Contact::operator=(const Contact& param)
{
	if (DEBUG)
		std::cout << "= operator overwriting method called" << std::endl;
	if (this != &param)
	{
		this->firstName = param.firstName;
		this->lastName = param.lastName;
		this->nickname = param.nickname;
		this->phoneNumber = param.phoneNumber;
		this->darkestSecret = param.darkestSecret;
	}
	return *this;
}

//default destructor

Contact::~Contact(void)
{
	if (DEBUG)
		std::cout << "Default destructor called" << std::endl;
}

//geters and seters

std::string Contact::getFirstName(void)
{
	return (firstName);
}

std::string Contact::getLastName(void)
{
	return (lastName);	
}

std::string Contact::getNickname(void)
{
	return (nickname);
}

//other methods

void	Contact::print(void)
{
	if (DEBUG)
		std::cout << "Contact print called" << std::endl;
	std::cout << "Contact first name: " << firstName << std::endl;
	std::cout << "last name" << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}
