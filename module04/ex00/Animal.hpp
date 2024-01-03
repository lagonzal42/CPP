/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:50:27 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/28 20:50:27 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

#include <string>

class Animal
{
	protected:
		std::string type;

	public:
		// Constructor
		Animal(void);

		// Destructor
		virtual ~Animal(void);

		// Copy constructor
		Animal(const Animal& param);

		// = operator override
		Animal&	operator=(const Animal& param);

		// mandatory methods
		virtual void	makeSound(void) const;
		std::string		getType(void) const;	
};

#endif