#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string pName, Weapon& pWeapon) :  _name(pName), _weapon(&pWeapon)
{
	if (DEBUG)
		std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
	if (DEBUG)
		std::cout << "HumanA destructor called" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << "HumanA attacked with " << _weapon->getType() << std::endl;
}