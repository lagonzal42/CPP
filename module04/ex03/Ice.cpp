/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:06:05 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/03 13:06:05 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void)
{
	std::cout << "Ice constructor called" << std::endl;
	type = "ice";
}

// Ice::Ice(const std::string& pType)
// {
// 	std::cout << "Ice copy constructor called" << std::endl;
// 	type = "ice";
// }

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria*	Ice::clone(void) const
{
	std::cout << "Ice cloner called" << std::endl;
	AMateria	*newMateria = new Ice;
	*newMateria = *this;
	return (newMateria);
}

void	Ice::use(ICharacter& target) const
{
	std::cout << "*  shots an iceball to " << target.getName() << " *" << std::endl;
}
