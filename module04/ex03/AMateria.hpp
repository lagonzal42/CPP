/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:04:12 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/02 19:04:12 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
	
		//Constructor
		AMateria(void);
	public:
		
		// Parameter constructor
		AMateria(const std::string& pType);

		AMateria(const AMateria& param);

		virtual ~AMateria(void);

		AMateria&	operator=(const AMateria& param);

		const std::string& getType(void) const; //Returns the materia type
	
		virtual AMateria* clone(void) const = 0;

		virtual void use(ICharacter& target) const = 0;
};



#endif