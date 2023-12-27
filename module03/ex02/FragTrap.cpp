/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:52:33 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 17:52:33 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string pName)
: ClapTrap::ClapTrap(pName)
{
    std::cout << "FragTrap parameter constructor called" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& param)
: ClapTrap::ClapTrap(param)
{
    std::cout << "Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& param)
{
	std::cout << "FragTrap assingment operator called" << std::endl;
	if (this != &param)
	{
		this->setName(param.getName());
		this->setHitPoints(param.getHitPoints());
		this->setEnergyPoints(param.getEnergyPoints());
		this->setAttackDamage(param.getAttackDamage());
		
	}
	return (*this);	
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " says: High five guys!" << std::endl;
}