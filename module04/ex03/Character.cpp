/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:18:00 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/03 13:18:00 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void)
{
	std::cout << "Character default constructor called" << std::endl;
	name = "Cloud";
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character(std::string pName)
{
	std::cout << "Character default constructor called" << std::endl;
	name = pName;
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

Character::Character(const Character& param)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = param;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != 0)
			delete inventory[i];
	}
}

Character&  Character::operator=(const Character& param)
{
	std::cout << "Character assingment operator called" << std::endl;
	if (this != &param)
	{
		name = param.getName();
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
		}
		AMateria* to_clone;
		for (int i = 0; i < 4; i++)
		{
			to_clone = getMateria(i);
			if (to_clone != 0)
				inventory[i] = to_clone->clone();
			else
				inventory[i] = 0;
		}
	}
	return (*this);
}

const std::string&	Character::getName(void) const
{
	return (name);
}

AMateria*	Character::getMateria(int idx) const
{
	if (idx > 3 || idx < 0)
		return (0);
	return (inventory[idx]);
}

void	Character::equip(AMateria* m)
{
	bool	equipped	= false;
	int		i 			= 0;
	while (i < 4 && !equipped)
	{
		if (inventory[i] == 0)
		{
			inventory[i] = m;
			equipped = true;
		}
		i++;
	}
	if (!equipped)
		std::cout << "Inventory full, couldnt equip materia" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != 0)
		inventory[idx] = 0;
	else
		std::cout << "There is not materia in that slot" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx] != 0)
		inventory[idx]->use(target);
	else
		std::cout << "There is not materia in that slot" << std::endl;
}
