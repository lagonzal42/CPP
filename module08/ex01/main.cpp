/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 01:26:00 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/28 01:26:00 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    // Create a Span object with capacity for 5 numbers
    Span span(5);

    // Add some numbers to the span
    span.addNumber(5);
    span.addNumber(3);
    span.addNumber(9);
    span.addNumber(1);
    span.addNumber(6);

    std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
    std::cout << "Longest span: " << span.longestSpan() << std::endl;

    try 
    {
        span.addNumber(7);
    } 
    catch (const Span::SpanAlreadyFullException& e) 
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    Span span2(1);

    try 
    {
        std::cout << "Shortest span: " << span2.shortestSpan() << std::endl;
    }
    catch (const Span::LessThanTwoMembersException& e) 
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    try 
    {
        std::cout << "Longest span: " << span2.longestSpan() << std::endl;
    } 
    catch (const Span::LessThanTwoMembersException& e) 
    {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}