#include "Contact.hpp"
#include <iostream>

//default constructor

Contact::Contact(void)
{
        std::cout << "Default constructor called" << std::endl;
}

//constructor with parameters

Contact::Contact(int pX, int pY) : x(pX), y(pY)
{
        std::cout << "Parameter constructor called" << std::endl;
        return;
}

//copy constructor
Contact::Contact(const Contact& param) : x(param.x), y(param.y)
{
        std::cout << "Copy constructor called" << std::endl;
        return;
}

 Contact& Contact::operator=(const Contact& param)
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

Contact::~Contact(void)
{
        std::cout << "Default destructor called" << std::endl;
}

//geters and seters

