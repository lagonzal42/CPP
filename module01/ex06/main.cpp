/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:38:18 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:38:18 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Harl	Karen;

	if (argc != 2)
		std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	else
		Karen.complain(argv[1]);
}
