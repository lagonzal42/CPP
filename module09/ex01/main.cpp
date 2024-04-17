/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:14:19 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/20 12:14:19 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Invalid number of arguments" << std::endl;
        return (1);
    }
    RPN rpn;
    try
    {
        std::cout << rpn.calculate(av[1]) << std::endl;
    }
    catch(RPN::BadFormatException& e)
    {
        std::cerr << e.what() << '\n';
    }
}
