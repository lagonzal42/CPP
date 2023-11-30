#include "Weapon.hpp"
#include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

Weapon::Weapon(std::string pType)
{
	type = pType;
	if (DEBUG)
		std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
	if (DEBUG)
		std::cout << "Weapon destructor called" << std::endl;
	
}

std::string	Weapon::getType(void)
{
	if (DEBUG)
		std::cout << "Weapon geter called\n" << std::endl;
	return (type);
}

void		Weapon::setType(std::string pType)
{
	if (DEBUG)
		std::cout << "Weapon seter called" << std::endl;
	type = pType;
}