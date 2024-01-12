/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:45:33 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/10 13:45:33 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
	private:

		std::string target;

		//default constructor
		RobotomyRequestForm(void);
	
	public:
		//parameter constructor
		RobotomyRequestForm(std::string pTarget);

		//copy constructor
		RobotomyRequestForm(const RobotomyRequestForm& param);

		//default destructor
		~RobotomyRequestForm(void);

		//assigntment operator overload
		RobotomyRequestForm& operator=(const RobotomyRequestForm& param);

		void    execute(const Bureaucrat& executor) const;

		//geters and seters
		std::string getTarget(void) const;
};

#endif