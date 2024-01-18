/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:50:35 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/28 20:50:35 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	if (DEBUG)
		std::cout << "Cat constructor called" << std::endl;
	type = "cat";
}

Cat::~Cat(void)
{
	if (DEBUG)
		std::cout << "Cat destructor called" << std::endl;
	
}

Cat::Cat(const Cat& param)
: Animal(param)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& param)
{
	if (DEBUG)
		std::cout << "Animal assignment operator called" << std::endl;
	if (&param != this)
	{
		delete brain;
		brain = new Brain(*(param.getBrain()));
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "[MEOW, MEOW]" << std::endl;
}
