/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:56:34 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/09 15:56:34 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool				formSigned;
		const int			gradeToSign;
		const int			gradeToExec;
	
		//Constructor
		Form(void);

	public:
		//Parameter constructor
		Form(std::string pName, bool pFS, int pGTS, int pGTE);

		//Copy constructor
		Form(const Form& param);

		//Destructor
		~Form(void);

		//assingment operator overload
		Form&	operator=(const Form& param);

		//geters and setters
		std::string	getName(void) const;
		bool		getFS(void) const;
		int			getGTS(void) const;
		int			getGTE(void) const;

		//mandatory
		void		beSigned(const Bureaucrat& signer);

		//Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("Form::Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("Form::Grade is too low");
				}
		};
};

//<< override
std::ostream&	operator<<(std::ostream& os, const Form& param);

#endif