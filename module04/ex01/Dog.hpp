/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:50:46 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/28 20:50:46 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        // Constructor
        Dog(void);

        // Destructor
        ~Dog(void);

        // Copy constructor
        Dog(const Dog& param);

        Dog&	operator=(const Dog& param);


        // mandatory
        void makeSound(void) const;
};

#endif
