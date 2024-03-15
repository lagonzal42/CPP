/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:28:02 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/15 12:57:00 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename F>
void    iter(T *array, unsigned int i, F function)
{
    if (function)
    {
        for (unsigned int x = 0; x < i; x++)
            function(array[x]);       
    }
}

#endif
