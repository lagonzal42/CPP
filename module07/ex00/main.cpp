/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:52:30 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/20 16:07:07 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Swap.hpp"
#include "Max.hpp"
#include "Min.hpp"
#include <iostream>
#include <string>

int main(void)
{
    {
        int a = 3;
        int b = 2;

        std::cout << "a = " << a << " || b = " << b << std::endl;
        ::swap<int>(a, b);
        std::cout << "a = " << a << " || b = " << b << std::endl;
        std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
        std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    }
    {
        std::string a = "First string";
        std::string b = "Second string";
        
        std::cout << "a = " << a << " || b = " << b << std::endl;
        ::swap<std::string>(a, b);
        std::cout << "a = " << a << " || b = " << b << std::endl;
        std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
        std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    }
    
}
