/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:54:47 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/08 17:54:47 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <string>

#define MIN_GRADE 150
#define MAX_GRADE 1

# ifndef DEBUG
#  define DEBUG 0
# endif

class Bureaucrat
{
	private:
		const std::string	name;
		int 				grade;
	
	public:
		//Constructor
		Bureaucrat();

		//Parameter constructor
		Bureaucrat(std::string pName, int pGrade);

		//Copy Constructor
		Bureaucrat(const Bureaucrat& param);

		//Destructor
		~Bureaucrat();

		//assingment operator
		Bureaucrat& operator=(const Bureaucrat& param);

		//geters and seters
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		setGrade(int pGrade);

		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("Grade is too low");
				}
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& parameter);

#endif