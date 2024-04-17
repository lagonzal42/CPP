/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:33:24 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/20 11:33:24 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <stack>
#include <exception>


class RPN
{
    private:
        std::stack<int> myStack;
    
        RPN(const RPN&);
        const RPN& operator=(const RPN& p);
    
    public:

        int calculate(const std::string& input);
        
        RPN(void);
        ~RPN(void);

    class BadFormatException : public std::exception
    {
        public:
			const char* what() const throw()
			{
                return ("The input has a bad format");
            }

    };
};
