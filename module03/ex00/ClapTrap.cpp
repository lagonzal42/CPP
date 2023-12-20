/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:41:19 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/20 15:28:13 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string pName)
	: name(pName) , hitPoints(10), energyPoints(10), attackDamage(0)
{
	if (DEBUG)
		std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	if (DEBUG)
		std::cout << "ClapTrap destructor called" << std::endl;	
}

ClapTrap::ClapTrap(const ClapTrap& param)
	: name(param.getName()), hitPoints(param.getHitPoints()), 
	energyPoints(param.getEnergyPoints()), attackDamage(0) 
{
	if (DEBUG)
		std::cout << "ClapTrap copy constructor called" << std::endl;		
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& param)
{
	if (DEBUG)
		std::cout << "ClapTrap assingment operator called" << std::endl;
	if (this != &param)
	{
		name = param.getName();
		hitPoints = param.getHitPoints();
		energyPoints = param.getEnergyPoints();
		attackDamage = 0;
		
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl; 
		energyPoints--;
	}
	else
		std::cout << "ClapTrap " << name << " can't attack " << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " recieves " << amount << " points of damage" << std::endl;
	hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ClapTrap " << name << " repaired itself healing " << amount << " points" << std::endl;
		energyPoints--;
		if (hitPoints + amount > 10)
			hitPoints = 10;
		else
			hitPoints += amount;
	}
	else
		std::cout << "ClapTrap " << name <<" can't repair itself" << name << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (name);
}

short int	ClapTrap::getHitPoints(void) const
{
	return (hitPoints);
}

short int	ClapTrap::getEnergyPoints(void) const
{
	return (energyPoints);
}

short int	ClapTrap::getAttackDamage(void) const
{
	return (attackDamage);
}
