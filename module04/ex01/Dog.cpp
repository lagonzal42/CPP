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

Dog::Dog(const Dog& param)
: Animal(param)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& param)
{
	if (DEBUG)
		std::cout << "Animal assignment operator called" << std::endl;
	if (&param != this)
	{
		delete brain;
		brain = new Brain(param.getBrain());
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "[WOOF, WOOF]" << std::endl;
}
