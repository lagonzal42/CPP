/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:18:27 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/02 16:18:27 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain(void)
{
	std::string result;          // string which will contain the result
	std::ostringstream convert;   // stream used for the conversion
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		convert << i;
		result = convert.str();
		ideas[i] = "Idea " + result;
	}
}

Brain::Brain(const Brain& param)
{
	std::cout << "Brain copy constructor called" << std::endl;
		for (int i = 0; i < 100; i++)
			ideas[i] = param.getIdea(i);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& param)
{
	if (this != &param)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = this->getIdea(i);
	}
	return (*this);
}

void	Brain::setIdea(std::string idea, int index)
{
	ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	return (ideas[index]);
}
