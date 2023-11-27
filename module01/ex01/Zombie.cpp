#include "Zombie.hpp"

Zombie::Zombie(void)
{
    if (DEBUG)
        std::cout << "Default constructor called, default name is def" << std::endl;
}

Zombie::Zombie(std::string pName)
{
    if (DEBUG)
        std::cout << "Parameter constructor called" << std::endl;
    name = pName;
    anounce();
}

Zombie::~Zombie(void)
{
    if (DEBUG)
        std::cout << "Default destructor called" << std::endl;
    std::cout << name << " : passed away" << std::endl;
}

std::string Zombie::getName(void)
{
    return (name);
}

void    Zombie::setName(std::string pName)
{
    name = pName;
}

void    Zombie::anounce(void)
{
    std::cout << name << " :  BraiiiiiiinnnzzzZ..." << std::endl;
}