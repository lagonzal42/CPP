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
	phoneNumber = std::atoi(check_input().c_str());
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

	std::cin >> input;
	while (input.empty())
		std::cout << "The field cannot be empty, try again" << std::endl;
	return (input);
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
	int	input;

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
	input = std::atoi(check_input().c_str());;
	if (input > 7 || input < 0)
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