/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:42:23 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/12 10:42:23 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

Intern::Intern(void)
{
	if (DEBUG)
		std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern&)
{
	if (DEBUG)
		std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern(void)
{
	if (DEBUG)
		std::cout << "Intern default destructor called" << std::endl;
}

Intern&	Intern::operator=(const Intern&)
{
	if (DEBUG)
		std::cout << "Intern assingmetn operator called" << std::endl;
	return (*this);
}

AForm*	Intern::makeForm(std::string pName, std::string pTarget)
{
	std::string	forms[] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};
	int i;
	AForm* form;

	for (i = 0 ; i < (int)(sizeof(forms) / sizeof(forms[0])); i++)
	{
		if (forms[i] == pName)
			break;
	}
	switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(pTarget);
			break;
		case 1:
			form = new ShrubberyCreationForm(pTarget);
			break;
		case 2:
			form = new RobotomyRequestForm(pTarget);
			break;
		default:
			std::cerr << "Invalid Form name" << std::endl;	
			break;
	}
	return (form);
}
