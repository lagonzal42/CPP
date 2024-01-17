/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:32:41 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/17 19:55:16 by lagonzal         ###   ########.fr       */
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
	protected:
		
		std::string	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
	
	public:
		//Default constructor
		ClapTrap(void);

		// Parameter constructor
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

		// geters / seters
		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		
		void		setName(std::string pName);
		void		setHitPoints(int pHitPoints);
		void		setEnergyPoints(int pEnergyPoints);
		void		setAttackDamage(int pAttackDamage);

		
};

#endif
