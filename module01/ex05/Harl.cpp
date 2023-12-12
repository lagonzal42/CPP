/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:37:57 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:37:57 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

std::string Harl::_options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
Harl::t_function_ptr Harl::_functions[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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

void	Harl::complain(std::string level)
{
	for (int x = 0; x < 4; x++)
	{
		if (_options[x] == level)
		{
			(this->*_functions[x])();
			return ;
		}
	}
	std::cout << "INVALID OPTION IM GONNA CALL THE POLICE" << std::endl;
}