/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:55:54 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/20 16:06:23 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
# define MIN_HPP

template <typename T>
T   min(T arg1, T arg2)
{
    if (arg1 < arg2)
        return (arg1);
    else
        return (arg2);
}

#endif
