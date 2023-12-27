/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:52:46 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 21:52:46 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;

    public:
        // Default constructor  
        DiamondTrap(void);

        // Parameter constructor
        DiamondTrap(std::string pName);

        // Default destructor
        ~DiamondTrap(void);

        // Copy constructor
        DiamondTrap(const DiamondTrap& param);

        // Mandatory methods
        void    whoAmI(void);
        
        //attack
        using ScavTrap::attack;
};

#endif