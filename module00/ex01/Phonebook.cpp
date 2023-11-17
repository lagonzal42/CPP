#include "Phonebook.hpp"
#include <iostream>

//default constructor

Phonebook::Phonebook(void)
{
        std::cout << "Default constructor called" << std::endl;
}

//constructor with parameters

Phonebook::Phonebook(int pX, int pY) : x(pX), y(pY)
{
        std::cout << "Parameter constructor called" << std::endl;
        return;
}

//copy constructor
Phonebook::Phonebook(const Phonebook& param) : x(param.x), y(param.y)
{
        std::cout << "Copy constructor called" << std::endl;
        return;
}

 Phonebook& Phonebook::operator=(const Phonebook& param)
{
        std::cout << "= operator overwriting method called" << std::endl;
        if (this != &param)
        {
                this->x = param.x;
                this->y = param.y;
        }
        return *this;
}

//default destructor

Phonebook::~Phonebook(void)
{
        std::cout << "Default destructor called" << std::endl;
}

//geters and seters

