/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:14:24 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/12 16:46:27 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    std::string str;
    if (argc != 2)
        std::cerr << "Invalid number of arguments" << std::endl;
    else
    {
        std::string str(argv[1]);
        if (str.length() == 0)
            return (0);
        std::cout << "To convert: " << str << std::endl;
        ScalarConverter::convert(str);
    }
    // str = "0.0";
    // std::cout << "To convert: " << str << std::endl;
    // ScalarConverter::convert(str);
    // str = "nan";
    // std::cout << "To convert: " << str << std::endl;
    // ScalarConverter::convert(str);
    // str = "nanf";
    // std::cout << "To convert: " << str << std::endl;
    // ScalarConverter::convert(str);
    
}
