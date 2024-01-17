/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:03:12 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 14:03:12 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	this->setName("Larry"); 
}

ScavTrap::ScavTrap(std::string pName)
: ClapTrap::ClapTrap(pName)
{
	std::cout << "ScavTrap parameter constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& param)
: ClapTrap::ClapTrap(param)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& param)
{
	std::cout << "ScavTrap assingment operator called" << std::endl;
	if (this != &param)
	{
		this->setName(param.getName());
		this->setHitPoints(param.getHitPoints());
		this->setEnergyPoints(param.getEnergyPoints());
		this->setAttackDamage(param.getAttackDamage());
		
	}
	return (*this);	
}

void	ScavTrap::guardTheGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is guarding the gate" << std::endl;
}

void	ScavTrap::attack(std::string objective)
{
	std::cout << "ScavTrap " << this->name << " attacks " << objective << " and causes " << this->attackDamage << std::endl;
}
