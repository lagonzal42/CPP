/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:50:24 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/28 20:50:24 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	if (DEBUG)
		std::cout << "Animal constructor called" << std::endl;
	type = "no type";
	brain = new Brain;
}

Animal::~Animal(void)
{
	delete brain;
	if (DEBUG)
		std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& param)
{
	if (DEBUG)
		std::cout << "Animal copy constructor called" << std::endl;
	type = param.getType();
	brain = new Brain(param.getBrain());
}

Animal&	Animal::operator=(const Animal& param)
{
	if (DEBUG)
		std::cout << "Animal assignment operator called" << std::endl;
	if (&param != this)
	{
		type = param.getType();
		delete brain;
		brain = new Brain(param.getBrain());
	}
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "[Generic animal sound]" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}

Brain	Animal::getBrain(void) const
{
	return (*brain);
}
