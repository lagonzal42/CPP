/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:55:40 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/10 13:55:40 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", 145, 137), target("no target")
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string pTarget)
	: AForm("ShrubberyCreationForm", 145, 137), target(pTarget)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& param)
	: AForm("ShrubberyCreationForm", 145, 137), target(param.getTarget())
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& param)
{
	if (this != &param)
	{
		this->target = param.getTarget();
		this->setFS(param.getFS());
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->getGTE())
		throw (AForm::GradeTooLowException());
    std::ofstream outputFile;

    // Open a file named "output.txt" in write mode
    outputFile.open(this->target.c_str());

    // Check if the file was opened successfully
    if (!outputFile.is_open()) {
        std::cout << "Failed to open the file." << std::endl;
    }
    else
    {
        outputFile << "           /\\\n";
        outputFile << "          /  \\\n";
        outputFile << "         /    \\\n";
        outputFile << "        /      \\\n";
        outputFile << "       /________\\\n";
        outputFile << "      /  /\\  /\\  \\\n";
        outputFile << "     /  /  \\/  \\  \\\n";
        outputFile << "    /  /________\\  \\\n";
        outputFile << "   /  /  /\\  /\\  \\  \\\n";
        outputFile << "  /  /  /  \\/  \\  \\  \\\n";
        outputFile << " /__/__/________\\__\\__\\\n";
        outputFile << "          ||||||\n";
        outputFile << "          ||||||\n";
        outputFile << "          ||||||\n";
        outputFile << "          ||||||\n";
        outputFile.close();
    }

    std::cout << "Data has been written to the file." << std::endl;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}
