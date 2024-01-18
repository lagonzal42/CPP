/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:50:39 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/28 20:50:39 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    	// Constructor
		WrongCat(void);

		// Destructor
		~WrongCat(void);
        
        // Copy constructor
        WrongCat(const WrongCat& param);

        // = operator override
        WrongCat&    operator=(const WrongCat& param);

};

#endif
