#include "Weapon.hpp"
#include <iostream>

# ifndef DEBUG
#  define DEBUG 0
# endif

Weapon::Weapon(std::string pType)
{
	type = pType;
	if (DEBUG)
		std::cout << "Constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
	if (DEBUG)
		std::cout << "Constructor called" << std::endl;
	
}