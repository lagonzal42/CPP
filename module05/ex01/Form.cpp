/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:56:57 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/09 15:56:57 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(void)
	: name("empty"), formSigned(false), gradeToSign(150), gradeToExec(150)
{
	if (DEBUG)
		std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string pName, bool pFS, int pGTS, int pGTE)
	: name(pName), formSigned(pFS), gradeToSign(pGTS), gradeToExec(pGTE)
{
	if (pGTS > MIN_GRADE || pGTE > MIN_GRADE)
		throw (Form::GradeTooLowException());
	if (pGTS < MAX_GRADE || pGTE < MAX_GRADE)
		throw (Form::GradeTooHighException());
	if (DEBUG)
		std::cout << "Form parameter constructor called" << std::endl;
}

Form::Form(const Form& param)
	: name(param.getName()), formSigned(param.getFS()), gradeToSign(param.getGTS()), gradeToExec(param.getGTE())
{
	if (DEBUG)
		std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	if (DEBUG)
		std::cout << "Form default destructor called" << std::endl;
}

Form&   Form::operator=(const Form& param)
{
	Form    f(param);
	return (f);
}

std::string Form::getName(void) const
{
	return (name);
}

bool Form::getFS(void) const
{
	return (formSigned);
}

int	Form::getGTS(void) const
{
	return (gradeToSign);
}

int	Form::getGTE(void) const
{
	return (gradeToExec);
}

void Form::beSigned(const Bureaucrat& signer)
{
	if (this->gradeToSign < signer.getGrade())
		throw (GradeTooLowException());
	else
		this->formSigned = true;
}

std::ostream&	operator<<(std::ostream& os, const Form& param)
{
	os << "Form " << param.getName() << " grade to sign " << param.getGTS() << " grade to exec " << param.getGTE() << " is signed " << param.getFS() << std::endl;
	return (os);
}
