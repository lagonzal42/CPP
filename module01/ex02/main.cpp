/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:37:12 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:37:12 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::cout << str << std::endl;
    std::string* strPTR;
    strPTR = &str;
    std::string& strREF = str;
    std::cout << "str memory address is: " << &str << std::endl;
    std::cout << "the memory address held by strPTR is: " << strPTR << std::endl;
    std::cout << "the memory address held by strREF is: " << &strREF << std::endl;

    std::cout << "the value of the string variable is: " << str << std::endl;
    std::cout << "the value pointed to by strPTR is: " << *strPTR << std::endl;
    std::cout << "the value pointed by strREF is: " << strREF << std::endl;
}
