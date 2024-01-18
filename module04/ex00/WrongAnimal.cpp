/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:15:40 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/18 12:15:40 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	if (DEBUG)
		std::cout << "WrongAnimal constructor called" << std::endl;
	type = "no type";
}

WrongAnimal::~WrongAnimal(void)
{
	if (DEBUG)
		std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& param)
{
	if (DEBUG)
		std::cout << "WrongAnimal copy constructor called" << std::endl;
	type = param.getType();
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& param)
{
	if (DEBUG)
		std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (&param != this)
		type = param.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[Generic animal sound]" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}
