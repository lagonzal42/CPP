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

// int main(void)
// {
//     std::vector<int> v;

//     v.push_back(1);
//     v.push_back(3);
//     v.insert(std::lower_bound(v.begin(), v.end(), 2), 2);

//     for (int i = 0; i < v.size(); i++)
//     {
//         std::cout << v[i] << std::endl;
//     }
// }

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