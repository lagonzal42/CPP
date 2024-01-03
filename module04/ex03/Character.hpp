/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:09:34 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/03 13:09:34 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria*	inventory[4];
	
	public:
		//default constructor
		Character(void);

		Character(std::string pName);

		//copy constructor
		Character(const Character& param);

		//default destructor
		~Character(void);

		//assignment operator
		Character&	operator=(const Character& param);
		
		//getters and setters
		const std::string& 	getName() const;
		AMateria*			getMateria(int idx) const;
		
		//previous virual methods
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
