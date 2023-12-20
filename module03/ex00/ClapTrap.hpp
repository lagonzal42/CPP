/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:32:41 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/20 15:06:50 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		short int	hitPoints;
		short int	energyPoints;
		short int	attackDamage;
	public:
		// Default constructor
		ClapTrap(std::string pName);
		
		// Default destructor
		~ClapTrap(void);
		
		// Copy constructor
		ClapTrap(const ClapTrap& param);
		
		// = operator overload
		ClapTrap&	operator=(const ClapTrap& param);
		
		//mandatory methods
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		// geters
		std::string	getName(void) const;
		short int	getHitPoints(void) const;
		short int	getEnergyPoints(void) const;
		short int	getAttackDamage(void) const;
		
};

#endif
