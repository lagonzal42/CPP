/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:52:19 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/23 17:52:19 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        //Default constructor
        FragTrap(void);

        //Parameter constructor
        FragTrap(std::string pName);

        // Default destructor
        ~FragTrap(void);

        // Copy constructor
        FragTrap(const FragTrap& param);

        // = operator overload
        FragTrap&   operator=(const FragTrap& param);

        // Mandatory method
        void        highFivesGuys(void);
};

#endif