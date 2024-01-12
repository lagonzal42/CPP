/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:23:34 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/09 14:23:34 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include "Intern.hpp"
#include "AForm.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat b0("Juan", 5);
			Bureaucrat b1("James", 25);
			std::cout << "This are the burocrats" << std::endl;
			std::cout << b0 << std::endl;
			std::cout << b1 << std::endl;
			Intern intern0;
			AForm* f0;
			f0 = intern0.makeForm("RobotomyRequest", "Luis");
			std::cout << "This is the form" << std::endl;
			std::cout << *f0 << std::endl;
			b1.signForm(*f0);
			std::cout << *f0 << std::endl;
			std::cout << "Now is going to be executed" << std::endl;
			b0.executeForm(*f0);
			delete f0;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
		catch (AForm::GradeTooLowException& ex1)
		{
			std::cerr << ex1.what() << std::endl;
		}
		catch (AForm::GradeTooHighException& ex1)
		{
			std::cerr << ex1.what() << std::endl;
		}
		catch (Intern::InvalidFormNameException &ex2)
		{
			std::cerr << ex2.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat b0("Juan", 137);
			Bureaucrat b1("James", 146);
			std::cout << "This are the burocrats" << std::endl;
			std::cout << b0 << std::endl;
			std::cout << b1 << std::endl;
			std::cout << "This is the form" << std::endl;
			ShrubberyCreationForm f0("forest");
			std::cout << f0 << std::endl;
			b1.signForm(f0);
			std::cout << f0 << std::endl;
			std::cout << "Now is going to be executed" << std::endl;
			b0.executeForm(f0);
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
		catch (AForm::GradeTooLowException& ex1)
		{
			std::cerr << ex1.what() << std::endl;
		}
		catch (AForm::GradeTooHighException& ex1)
		{
			std::cerr << ex1.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat b0("Juan", 45);
			Bureaucrat b1("James", 72);
			std::cout << "This are the burocrats" << std::endl;
			std::cout << b0 << std::endl;
			std::cout << b1 << std::endl;
			std::cout << "This is the form" << std::endl;
			RobotomyRequestForm f0("Luis");
			std::cout << f0 << std::endl;
			b1.signForm(f0);
			std::cout << f0 << std::endl;
			std::cout << "Now is going to be executed" << std::endl;
			b0.executeForm(f0);
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
		catch (AForm::GradeTooLowException& ex1)
		{
			std::cerr << ex1.what() << std::endl;
		}
		catch (AForm::GradeTooHighException& ex1)
		{
			std::cerr << ex1.what() << std::endl;
		}
	}
}
