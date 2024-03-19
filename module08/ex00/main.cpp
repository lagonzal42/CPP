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
#include <stack>

int main(void)
{
	{
		try
		{
			std::cout << "===================================\n";
			std::cout << "Vector or iterable containers test\n" << std::endl;
			std::cout << "Values introduced: 1, 2, 5, 3, 5" << std::endl; 
			std::vector<int> v1;
			
			v1.push_back(1);
			v1.push_back(2);
			v1.push_back(5);
			v1.push_back(3);
			v1.push_back(5);
			
			std::cout << "found 1? " << *(easyfind(v1, 1)) << std::endl;
			std::cout << "found 3? " << *(easyfind(v1, 3)) << std::endl;
			std::cout << "found 4? " << *(easyfind(v1, 4)) << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	// {
	// 	std::cout << "\n===================================\n";
	// 	std::cout << "stack containers test\n" << std::endl;
	// 	std::cout << "Values introduced: 1, 2, 5, 3, 4" << std::endl; 
	// 	std::stack<int> v1;
		
	// 	v1.push(1);
	// 	v1.push(2);
	// 	v1.push(5);
	// 	v1.push(3);
	// 	v1.push(4);
		
	// 	std::cout << "found 1? " << (easyfind<std::stack<int> >(v1, 1)) << std::endl;
	// 	std::cout << "found 3? " << (easyfind<std::stack<int> >(v1, 3)) << std::endl;
	// 	std::cout << "found 4? " << (easyfind<std::stack<int> >(v1, 4)) << std::endl;
	// }
	// {
	// 	std::cout << "\n===================================\n";
	// 	std::cout << "queue containers test\n" << std::endl;
	// 	std::cout << "Values introduced: 1, 2, 5, 3, 4" << std::endl; 
	// 	std::queue<int> v1;
		
	// 	v1.push(1);
	// 	v1.push(2);
	// 	v1.push(5);
	// 	v1.push(3);
	// 	v1.push(4);
		
	// 	std::cout << "found 1? " << (easyfind<std::queue<int> >(v1, 1)) << std::endl;
	// 	std::cout << "found 3? " << (easyfind<std::queue<int> >(v1, 3)) << std::endl;
	// 	std::cout << "found 5? " << (easyfind<std::queue<int> >(v1, 5)) << std::endl;

	// }
}
