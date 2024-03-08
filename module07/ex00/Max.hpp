/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:01:40 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/20 16:06:20 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
# define MAX_HPP

template <typename T>
T   max(T arg1, T arg2)
{
    if (arg1 > arg2)
        return (arg1);
    else
        return (arg2);
}

#endif
