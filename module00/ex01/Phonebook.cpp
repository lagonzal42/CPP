/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:16:53 by lagonzal          #+#    #+#             */
/*   Updated: 2023/11/17 01:16:53 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	if (DEBUG)
	std::cout << "Phonebook constructor called" << std::endl;
}

Phonebook::~Phonebook(void)
{
	if (DEBUG)
	std::cout << "Phonebook destructor called" << std::endl;
}
