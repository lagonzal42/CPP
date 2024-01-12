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

class AForm;

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

		//mandatory
		void		increment(void);
		void		decrement(void);
		void		signForm(AForm& pForm);
		void		executeForm(AForm& pForm);

		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("Bureaucrat::Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("Bureaucrat::Grade is too low");
				}
		};
};

//<< override
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& parameter);

#endif
