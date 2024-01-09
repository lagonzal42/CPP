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
#include <iostream>

int main(void)
{
	Bureaucrat b0("Juan", 33);
	try
	{
		Bureaucrat b1("James", 45);
		std::cout << b1 << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	std::cout << b0 << std::endl;

}