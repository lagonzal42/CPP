/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:37:22 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:37:22 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# ifndef DEBUG
#  define DEBUG 0
# endif

#include "Weapon.hpp"

class HumanA
{
	private:

		std::string	_name;
		Weapon& 	_weapon;

	public:

		HumanA(std::string pName, Weapon& pWeapon);
		~HumanA(void);

		void	attack(void);
};

#endif
