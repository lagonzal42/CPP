/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:56:34 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/09 15:56:34 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string	name;
		bool				formSigned;
		const int			gradeToSign;
		const int			gradeToExec;
	
		//Constructor
		AForm(void);

	public:
		//Parameter constructor
		AForm(std::string pName, int pGTS, int pGTE);

		//Copy constructor
		AForm(const AForm& param);

		//Destructor
		virtual ~AForm(void);

		//assingment operator overload
		AForm&	operator=(const AForm& param);

		//geters and setters
		std::string	getName(void) const;
		bool		getFS(void) const;
		int			getGTS(void) const;
		int			getGTE(void) const;
		void		setFS(bool pFS);

		//mandatory
		void			beSigned(const Bureaucrat& signer);
		virtual void	execute(const Bureaucrat& executor) const = 0;

		//Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("AForm::Grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char*	what() const throw()
				{
					return ("AForm::Grade is too low");
				}
		};
};

//<< override
std::ostream&	operator<<(std::ostream& os, const AForm& param);

#endif
