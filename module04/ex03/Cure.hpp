/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:43:55 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/03 12:43:55 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        //Default constructor
        Cure(void);
        
        //Parameter constructor
        //Cure(const std::string& pType);
        
        //Copy constructor
        Cure(const AMateria& param);

        //Destructor
        ~Cure(void);

        //Assingment operator
        //AMateria&   operator=(const AMateria& param);

        //prev virtual methods
        AMateria*   clone(void) const;
        void        use(ICharacter& target) const;
};

#endif