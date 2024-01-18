/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:44:13 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/03 12:44:13 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        //Default constructor
        Ice(void);

        //Parameter constructor
        //Ice(const std::string& pType);
        
        //Copy constructor
        Ice(const AMateria& param);

        //Destructor
        ~Ice(void);

        //Assingment operator
        AMateria&   operator=(const AMateria& param);

        //prev virtual methods
        AMateria*   clone(void) const;
        void        use(ICharacter& target) const;
};

#endif
