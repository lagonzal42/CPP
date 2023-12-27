/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:15:42 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 18:30:12 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "ClapTrap is gonna be created" << std::endl;
	ClapTrap Roger("Roger");
	std::cout << "ClapTrap is gonna attack" << std::endl;
	Roger.attack("Corrector");
	std::cout << "FragTrap is gonna be created" << std::endl;
	FragTrap Larry;
	std::cout << "FragTrap is gonna attack" << std::endl;
	Larry.attack("Corrector");
    std::cout << "FragTrap is gonna High five" << std::endl;
	Larry.highFivesGuys();
	std::cout << "FragTrap is gonna be reassigned" << std::endl;
	FragTrap Larry2 = Larry;
	std::cout << "FragTrap is gonna be destroyed" << std::endl;
	Larry2.~FragTrap();
	std::cout << "FragTrap has been destroyed" << std::endl;
}
