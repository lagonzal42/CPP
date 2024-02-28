/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:30:30 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/27 17:30:30 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iterator>

class ValueNotFoundException : public std::exception
{
	public:
		const char * what() const throw()
		{
			return ("The value wasnt found");
		}
};

template<typename T>
typename T::iterator easyfind(T& cont, int search)
{
	for (typename T::iterator it = cont.begin(); it != cont.end(); it++)
	{
		if (*it == search)
			return (it);
	}
	
	throw ValueNotFoundException();
}

#endif //easyfind.hpp