/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:15:42 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 16:49:36 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "ClapTrap is gonna be created" << std::endl;
	ClapTrap Roger("Roger");
	std::cout << "ClapTrap is gonna attack" << std::endl;
	Roger.attack("Corrector");
	std::cout << "ScavTrap is gonna be created" << std::endl;
	ScavTrap Larry;
	std::cout << "ScavTrap is gonna attack" << std::endl;
	Larry.attack("Corrector");
    std::cout << "ScavTrap is gonna guard the gate" << std::endl;
	Larry.guardTheGate();
	std::cout << "ScavTrap is gonna be reassigned" << std::endl;
	ScavTrap Larry2 = Larry;
	std::cout << "ScavTrap is gonna be destroyed" << std::endl;
	Larry2.~ScavTrap();
	std::cout << "ScavTrap has been destroyed" << std::endl;
}
