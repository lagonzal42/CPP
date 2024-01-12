/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:54:15 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/10 13:54:15 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
	private:

		std::string target;

		//default constructor
		ShrubberyCreationForm(void);
	
	public:
		//parameter constructor
		ShrubberyCreationForm(std::string pTarget);

		//copy constructor
		ShrubberyCreationForm(const ShrubberyCreationForm& param);

		//default destructor
		~ShrubberyCreationForm(void);

		//assigntment operator overload
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& param);

		void    execute(const Bureaucrat& executor) const;

		//geters and seters
		std::string getTarget(void) const;
};

#endif