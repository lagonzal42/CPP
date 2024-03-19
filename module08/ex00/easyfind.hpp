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
#include <queue>
#include <stack>

class ValueNotFoundException : public std::exception
{
    public:
        const char * what() const throw()
        {
            return ("The value wasn't found");
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

// template<>
// bool easyfind<std::stack<int> >(std::stack<int>& cont, int search)
// {
//     std::stack<int> copy = cont;

//     while (cont.size() > 0)
//     {
//         if (copy.top() == search)
//             return (true);
//         copy.pop();
//     }
//     return (false);
// }

// template<>
// bool easyfind<std::queue<int> >(std::queue<int>& cont, int search)
// {
//     std::queue<int> copy = cont;

//     while (cont.size() > 0)
//     {
//         if (copy.front() == search)
//             return (true);
//         copy.pop();
//     }
//     return (false);
// }


#endif //easyfind.hpp
