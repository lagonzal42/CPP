/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:36:11 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/03 12:36:11 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void)
{
	std::cout << "Cure constructor called" << std::endl;
	type = "cure";
}

// Cure::Cure(const std::string& pType)
// {
// 	std::cout << "Cure copy constructor called" << std::endl;
// 	type = "cure";
// }

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria*	Cure::clone(void) const
{
	std::cout << "Cure cloner called" << std::endl;
	AMateria	*newMateria = new Cure;
	*newMateria = *this;
	return (newMateria);
}

void	Cure::use(ICharacter& target) const
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
