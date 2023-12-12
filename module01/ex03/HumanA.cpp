/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:37:19 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:37:19 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string pName, Weapon& pWeapon) :  _name(pName), _weapon(&pWeapon)
{
	if (DEBUG)
		std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
	if (DEBUG)
		std::cout << "HumanA destructor called" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << "HumanA attacked with " << _weapon->getType() << std::endl;
}