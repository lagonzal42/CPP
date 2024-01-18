/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:50:39 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/28 20:50:39 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
    	// Constructor
		Cat(void);

		// Destructor
		~Cat(void);
        
        // Copy constructor
        Cat(const Cat& param);

        // = operator override
        Cat&    operator=(const Cat& param);

        //mandatory
        void makeSound(void) const;
};

#endif
