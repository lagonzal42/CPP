/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:05:50 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/03 16:05:50 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		memory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& param)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = param;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource Default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (memory[i] != 0)
			delete memory[i];
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& param)
{
	std::cout << "MateriaSource = operator called" << std::endl;
	if (this != &param)
	{
		for (int i = 0; i < 4; i++)
		{
			if (memory[i] != 0)
				delete memory[i];
		}
		AMateria	*to_clone;
		for (int i = 0; i < 4; i++)
		{
			to_clone = param.getMateria(i);
			if (to_clone != 0)
				memory[i] = to_clone->clone();
			else
				memory[i] = 0;
		}
	}
	return (*this);
}

AMateria*	MateriaSource::getMateria(int idx) const
{
	if (idx >= 0 && idx < 4)
		return (memory[idx]);
	else
		return (0);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int		i 		= 0;
	bool	added	= false;

	while (i < 4 && !added)
	{
		if (memory[i] == 0)
		{
			memory[i] = m;
			added = true;
		}	
		i++;
	}
	if (!added)
		std::cout << "unable to learn new materia, memory full" << std::endl;
}

AMateria*	MateriaSource::createMateria(const std::string& pType)
{
	int		i		= 0;
	bool	found	= false;

	while (i < 4 && !found)
	{
		if (memory[i] != 0 && memory[i]->getType() == pType)
			found = true;
		else
			i++;
	}
	if (found)
		return (memory[i]->clone());
	else
	{
		std::cout << "Couldnt find the materia type to create" << std::endl;
		return (0);
	}
}
