/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:15:42 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 22:32:28 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond;

	diamond.attack("Corrector");
	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardTheGate();
	diamond.beRepaired(10);
}
