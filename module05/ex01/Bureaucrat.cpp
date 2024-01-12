/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:37:39 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/09 13:37:39 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void)
	: name("empty") , grade(150)
{
	if (DEBUG)
		std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string pName, int pGrade)
	: name(pName), grade(pGrade)
{
	if (DEBUG)
		std::cout << "Bureaucrat parameter constructor called" << std::endl;
	if (pGrade < MAX_GRADE)
	{
		grade = 1;
		throw (GradeTooHighException());
	}
	if(pGrade > MIN_GRADE)
	{
		grade = 150;
		throw (GradeTooLowException());
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& param)
	: name(param.getName()), grade(param.getGrade())
{
	if (DEBUG)
		std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	if (DEBUG)
		std::cout << "Bureaucrat destructor called" << std::endl;	
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& param)
{
	if (this != &param)
		this->grade = param.getGrade();
	return (*this);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (name);
}

void	Bureaucrat::setGrade(int pGrade)
{
	if (pGrade < MAX_GRADE)
	{
		grade = 1;
		throw (GradeTooHighException());
	}
	if(pGrade > MIN_GRADE)
	{
		grade = 150;
		throw (GradeTooLowException());
	}
	grade = pGrade;
}

void	Bureaucrat::increment(void)
{
	if (this->grade > 1)
		this->grade--;
	else
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decrement(void)
{
	if (this->grade < 150)
		this->grade++;
	else
		throw (Bureaucrat::GradeTooLowException());
}

void	Bureaucrat::signForm(Form& pForm)
{
	if (pForm.getFS())
		std::cout << "Form is already signed" << std::endl;
	else
		try
		{
			pForm.beSigned(*this);
			std::cout << "The form " << pForm.getName() << " has been signed by " << *this;
		}
		catch(Form::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
			throw (Form::GradeTooLowException());
		}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& param)
{
	os << param.getName() << ", bureaucrat grade " << param.getGrade() << std::endl;
	return (os);
}
