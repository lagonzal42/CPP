/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:33:45 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/27 18:33:45 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>
#include <iostream>

int main(int argc, char** argv)
{
    PmergeMe p;
    if (argc < 3)
    {
        std::cerr << "Error" << std::endl;
        return (1);
    }
    else
        p.sort(&argv[1]);
    return (0);
}
