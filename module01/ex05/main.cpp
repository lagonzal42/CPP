/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:38:05 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:38:05 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
	std::string	input;
	Harl		karen;

	std::cout << "options are:  DEBUG, INFO, WARNING, ERROR" << std::endl;
	std::cout << "What do you want karen to do?" << std::endl;
	std::cin >> input;
	while (input.compare("EXIT"))
	{
		karen.complain(input);
		std::cout << "options are:  DEBUG, INFO, WARNING, ERROR" << std::endl;
		std::cout << "What do you want karen to do?" << std::endl;
		std::cin >> input;
	}
}