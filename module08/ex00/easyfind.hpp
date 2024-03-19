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
#include <algorithm>

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
    typename T::iterator it = std::find(cont.begin(), cont.end(), search);
    if (it != cont.end())
        return it;
    else
        throw ValueNotFoundException();
}

#endif //easyfind.hpp