/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:36:34 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:36:34 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	printname(void)
{
	Zombie otherZombie("Albert");
	std::cout << "new zombies name is " << otherZombie.getName() << std::endl;
	return (otherZombie);
}

int main(void)
{
	Zombie* myZombie = newZombie("Brandon");
	randomChump("Oscar");
	Zombie otherZombie = printname();

	std::cout << "my zombies name is " << myZombie->getName() << std::endl;
	delete myZombie;
}
