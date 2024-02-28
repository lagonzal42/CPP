/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:40:53 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/27 17:40:53 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
		std::vector<int> v1;
		
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(5);
		v1.push_back(3);
		v1.push_back(4);
		
		try
		{
			std::cout << *(easyfind(v1, 1)) << std::endl;
			std::cout << *(easyfind(v1, 3)) << std::endl;
			std::cout << *(easyfind(v1, 6)) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
}