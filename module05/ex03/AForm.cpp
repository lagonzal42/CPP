/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:56:57 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/09 15:56:57 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

AForm::AForm(void)
	: name("empty"), formSigned(false), gradeToSign(150), gradeToExec(150)
{
	if (DEBUG)
		std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string pName, int pGTS, int pGTE)
	: name(pName), formSigned(false), gradeToSign(pGTS), gradeToExec(pGTE)
{
	if (pGTS > MIN_GRADE || pGTE > MIN_GRADE)
		throw (AForm::GradeTooLowException());
	if (pGTS < MAX_GRADE || pGTE < MAX_GRADE)
		throw (AForm::GradeTooHighException());
	if (DEBUG)
		std::cout << "AForm parameter constructor called" << std::endl;
}

AForm::AForm(const AForm& param)
	: name(param.getName()), formSigned(param.getFS()), gradeToSign(param.getGTS()), gradeToExec(param.getGTE())
{
	if (DEBUG)
		std::cout << "AForm copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
	if (DEBUG)
		std::cout << "AForm default destructor called" << std::endl;
}

AForm&   AForm::operator=(const AForm& param)
{
	if (this != &param)
		this->formSigned = param.getFS();
	return (*this);
}

std::string AForm::getName(void) const
{
	return (name);
}

bool AForm::getFS(void) const
{
	return (formSigned);
}

int	AForm::getGTS(void) const
{
	return (gradeToSign);
}

int	AForm::getGTE(void) const
{
	return (gradeToExec);
}

void AForm::setFS(bool pFS)
{
	this->formSigned = pFS;
}

void AForm::beSigned(const Bureaucrat& signer)
{
	if (this->gradeToSign < signer.getGrade())
		throw (GradeTooLowException());
	else
		this->formSigned = true;
}

std::ostream&	operator<<(std::ostream& os, const AForm& param)
{
	os << param.getName() << " grade to sign " << param.getGTS() << " grade to exec " << param.getGTE() << " is signed " << param.getFS();
	return (os);
}
