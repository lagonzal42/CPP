/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:50:35 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/28 20:50:35 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	if (DEBUG)
		std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	if (DEBUG)
		std::cout << "WrongCat destructor called" << std::endl;

}

WrongCat::WrongCat(const WrongCat&)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}
