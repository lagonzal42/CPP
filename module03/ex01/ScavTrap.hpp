/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:03:07 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 14:03:07 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
    public:
        //Default constructor
        ScavTrap(void);

        //parameter constructor
        ScavTrap(std::string pName);
        
        //Default destructor
        ~ScavTrap(void);

        //Copy constructor
        ScavTrap(const ScavTrap& param);
    
        // = operator overload
        ScavTrap&   operator=(const ScavTrap& param);

        //mandatory method
        void        guardTheGate(void);
};

#endif