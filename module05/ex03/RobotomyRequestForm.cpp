/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:46:38 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/10 13:46:38 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", 72, 45), target("no target")
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string pTarget)
	: AForm("RobotomyRequestForm", 72, 45), target(pTarget)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& param)
	: AForm("RobotomyRequestForm", 72, 45), target(param.getTarget())
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& param)
{
	if (this != &param)
	{
		this->target = param.getTarget();
		this->setFS(param.getFS());
	}
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getGTE())
		throw (AForm::GradeTooLowException());
    std::cout << "*CLANG CLANG*" << std::endl;
    std::cout << "*WHIRR WHIRR*" << std::endl;
    std::cout << "*BZZZZ BZZZZ*" << std::endl;
    std::cout << "*CLICK CLICK*" << std::endl;
	std::srand(std::time(0));
    int random = std::rand();
	std::cout << "random number is " << random << std::endl;
    if (random % 2)
        std::cout << "I inform that the robotomy to " << target << "has been unsuccesfull" << std::endl;
    else
    	std::cout << "I inform that " << target << " has been Robotomized" << std::endl;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}
