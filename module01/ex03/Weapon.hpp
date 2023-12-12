/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:37:39 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:37:39 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

#include <string>

class Weapon
{
	private:

		std::string type;

	public:

	// Constructor
	Weapon(std::string type);

	// Destructor
	~Weapon(void);

	// geters and seters
	std::string	    getType(void);
	void		    setType(std::string pType);
};

#endif
