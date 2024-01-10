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
#include "Form.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat b0("Juan", 33);
	try
	{
		Bureaucrat b1("James", 45);
		std::cout << b1;
		Form f0("form0", 151, 0);
		b1.signForm(f0);
		std::cout << f0;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	catch (Form::GradeTooLowException& ex1)
	{
		std::cerr << ex1.what() << std::endl;
	}
	catch (Form::GradeTooHighException& ex1)
	{
		std::cerr << ex1.what() << std::endl;
	}
	std::cout << b0;
}
