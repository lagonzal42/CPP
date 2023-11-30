#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string pName)
{
    _weapon = NULL;
    _name = pName;
    if (DEBUG)
        std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB(void)
{
    if (DEBUG)
        std::cout << "HumanB destructor called" << std::endl;
}

void    HumanB::setWeapon(Weapon& pWeapon)
{
    _weapon = &pWeapon;
}

void    HumanB::attack(void)
{
    if (_weapon == NULL)
        std::cout << "HumanB attacked without a weapon" << std::endl;
    else
        std::cout << "HumanB attacked with a" << _weapon->getType() << std::endl;
}