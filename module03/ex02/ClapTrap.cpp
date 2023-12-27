/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:41:19 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 16:39:20 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "Larry";
	this->hitPoints = 10;
	this->attackDamage = 0;
	this->energyPoints = 10;
}

ClapTrap::ClapTrap(std::string pName)
	: name(pName) , hitPoints(10), energyPoints(10), attackDamage(0)
{
		std::cout << "ClapTrap parameter constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
		std::cout << "ClapTrap destructor called" << std::endl;	
}

ClapTrap::ClapTrap(const ClapTrap& param)
	: name(param.getName()), hitPoints(param.getHitPoints()), 
	energyPoints(param.getEnergyPoints()), attackDamage(0) 
{
		std::cout << "ClapTrap copy constructor called" << std::endl;		
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& param)
{
	std::cout << "ClapTrap assingment operator called" << std::endl;
	if (this != &param)
	{
		name = param.getName();
		hitPoints = param.getHitPoints();
		energyPoints = param.getEnergyPoints();
		attackDamage = param.getAttackDamage();
		
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

int	ClapTrap::getHitPoints(void) const
{
	return (hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (energyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (attackDamage);
}

void	ClapTrap::setName(std::string pName)
{
	this->name = pName;
}

void	ClapTrap::setHitPoints(int pHitPoints)
{
	this->hitPoints = pHitPoints;
}

void	ClapTrap::setEnergyPoints(int pEnergyPoints)
{
	this->energyPoints = pEnergyPoints;
}

void	ClapTrap::setAttackDamage(int pAttackDamage)
{
	this->attackDamage = pAttackDamage;
}