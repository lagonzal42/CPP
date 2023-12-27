/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:41:35 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 18:41:35 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)

{
	std::cout << "DiamondTrap default constructor called" << std::endl;    
	this->attackDamage = FragTrap::attackDamage;
	this->energyPoints = ScavTrap::energyPoints;
	this->hitPoints = FragTrap::hitPoints;
	this->name = ClapTrap::name;
	ClapTrap::name += "_clap_name";
}

DiamondTrap::DiamondTrap(std::string pName)
	:	ClapTrap(pName + "_clap_name"), FragTrap(pName), ScavTrap(pName)
{
	std::cout << "DiamondTrap parameter constructor called" << std::endl;
		this->attackDamage = FragTrap::attackDamage;
	this->energyPoints = ScavTrap::energyPoints;
	this->hitPoints = FragTrap::hitPoints;
	this->name = pName;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& param)
	: ClapTrap(param),  FragTrap(param), ScavTrap(param)
{
	std::cout << "Copy constructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap says: my name is " << this->name << " and my clap name is " << ClapTrap::name << std::endl;
}