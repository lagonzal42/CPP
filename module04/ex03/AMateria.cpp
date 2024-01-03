/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:23:27 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/02 19:23:27 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const std::string& pType)
{
	std::cout << "AMateria parameter constructor called" << std::endl;
	type = pType;
}

AMateria::AMateria(const AMateria& param)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	type = param.getType();
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& param)
{
	std::cout << "Asignment operator called" << std::endl;
	if (this != &param)
		type = param.getType();
	return (*this);
}

const std::string&	AMateria::getType(void) const
{
	return (type);
}