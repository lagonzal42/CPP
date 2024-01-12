/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:20:45 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/10 13:20:45 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
	private:

		std::string target;

		//default constructor
		PresidentialPardonForm(void);
	
	public:
		//parameter constructor
		PresidentialPardonForm(std::string pTarget);

		//copy constructor
		PresidentialPardonForm(const PresidentialPardonForm& param);

		//default destructor
		~PresidentialPardonForm(void);

		//assigntment operator overload
		PresidentialPardonForm& operator=(const PresidentialPardonForm& param);

		void    execute(const Bureaucrat& executor) const;

		//geters and seters
		std::string getTarget(void) const;
};

#endif