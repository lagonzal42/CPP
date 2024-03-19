/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:03:25 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/12 17:40:10 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# ifndef DEBUG
#  define DEBUG 0
# endif

#include <string>

class Base
{
	public:
		//constructor
		Base (void);

		//constructor with parameters
		Base (int pX, int pY);

		//copy constructor
		Base (const Base& param);

		//assingment operator
		Base& operator=(const Base& param);

		//destructor
		virtual ~Base (void);

		//other methods
		Base	*generate(void);
		void	identify(Base *p);
		void	identify(Base& p);
};
#endif
