/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:16:13 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/18 12:16:13 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

#include <string>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		// Constructor
		WrongAnimal(void);

		// Destructor
		virtual ~WrongAnimal(void);

		// Copy constructor
		WrongAnimal(const WrongAnimal& param);

		// = operator override
		WrongAnimal&	operator=(const WrongAnimal& param);

		// mandatory methods
		void	makeSound(void) const;
		std::string		getType(void) const;	
};

#endif
