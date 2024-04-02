/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:39:38 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/20 11:39:38 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <cstdlib>

RPN::RPN(void)
: myStack()
{}

RPN::RPN(const RPN&)
{}

RPN::~RPN(void)
{}

const RPN&  RPN::operator=(const RPN& p)
{
    return (p);
}

int RPN::calculate(const std::string& input)
{
    std::stringstream ss(input);
    std::string part;
    int first, second, result;

    size_t n = input.find_first_not_of("1234567890+-*/ ", 0);
    if (n != std::string::npos)
        throw (BadFormatException());
    while (std::getline(ss, part, ' '))
    {
        if ((part[0] == '+' || part[0] == '-' || part[0] == '*' || part[0] == '/') && part.size() == 1) 
        {
            if (myStack.size() < 2)
                throw (BadFormatException());
            second = myStack.top();
            myStack.pop();
            first = myStack.top();
            myStack.pop();
            if (part[0] == '+')
                result = first + second;
            if (part[0] == '-')
                result = first - second;
            if (part[0] == '*')
                result = first * second;
            if (part[0] == '/')
                result = first / second;
            myStack.push(result);
        }
        else
            myStack.push(std::atoi(part.c_str()));
    }
    if (myStack.size() > 1)
        throw (BadFormatException());
    else
        return (myStack.top());
}
