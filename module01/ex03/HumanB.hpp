/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:37:28 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:37:28 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# ifndef DEBUG
#  define DEBUG 0
# endif

#include "Weapon.hpp"

class HumanB
{
	private:

		Weapon* 	_weapon;
        std::string _name;

	public:

		HumanB(std::string pName);
		~HumanB(void);

        void    setWeapon(Weapon& pWeapon);
		void	attack(void);
};

#endif