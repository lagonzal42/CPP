/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:27:07 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/15 12:57:14 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include "Print.hpp"
#include <string>

int main(void)
{
    {
        int arr[5] = {3, 4, 5, 8, 2};
        
        ::iter<int, void(*)(int)>(arr, 5, ::print);
    }
    {
        std::string arr[4] = {"This", "Is", "A", "Placeholder"};
        
        ::iter<std::string, void(*)(std::string)>(arr, 4, ::print);
    }
}
