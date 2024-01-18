#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	if (DEBUG)
		std::cout << "Dog constructor called" << std::endl;
	type = "dog";
}

Dog::~Dog(void)
{
	if (DEBUG)
		std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog&)
{
	if (DEBUG)
		std::cout << "Dog assignment operator called" << std::endl;
	return (*this);
}

Dog::Dog(const Dog&)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "[WOOF, WOOF]" << std::endl;
}
