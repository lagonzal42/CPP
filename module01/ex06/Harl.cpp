/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:38:12 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:38:12 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

std::string Harl::_options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 

void	Harl::_debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable!\nI want to speak to the manager now." << std::endl;
}

Harl::Harl(void)
{
	if (DEBUG)
		std::cout << "Constructor called" << std::endl;
}

Harl::~Harl(void)
{
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

void Harl::complain(std::string level)
{
    int x = 0;
    while (x < 4)
    {
        if (_options[x] == level)
            break;
        x++;
    }
	switch (x)
	{
		case 0:
			_debug();
			/* fallthrough */
		case 1:
			_info();
			/* fallthrough */
		case 2:
			_warning();
			/* fallthrough */
		case 3:
			_error();
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
			break;
	}
}
