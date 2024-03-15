/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:57:30 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/28 12:57:30 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include <deque>
#include "MutantStack.hpp"

int main()
{
    std::stack<int> sstack;
    MutantStack<int> mstack;

    std::cout << "mutant stack empty: " <<  mstack.empty() << std::endl;
    std::cout << "normal stack empty: " << sstack.empty() << std::endl;
    std::cout << std::endl;
    mstack.push(5);
    sstack.push(5);
    mstack.push(17);
    sstack.push(17);
    std::cout << "mutant stack empty: " <<  mstack.empty() << std::endl;
    std::cout << "normal stack empty: " << sstack.empty() << std::endl;
    std::cout << "mutant stack top: " <<  mstack.top() << std::endl;
    std::cout << "normal stack top: " << sstack.top() << std::endl;
    std::cout << "mutant stack size: " << mstack.size() << std::endl;
    std::cout << "normal stack size: " << sstack.size() << std::endl;
    std::cout << std::endl;
    mstack.pop();
    sstack.pop();
    std::cout << "mutant stack top: " <<  mstack.top() << std::endl;
    std::cout << "normal stack top: " << sstack.top() << std::endl;
    std::cout << "mutant stack size: " << mstack.size() << std::endl;
    std::cout << "normal stack size: " << sstack.size() << std::endl;
    std::cout << std::endl;
    mstack.push(3);
    sstack.push(3);
    mstack.push(5);
    sstack.push(5);
    mstack.push(737);
    sstack.push(737);
    mstack.push(0);
    sstack.push(0);
    std::cout << "mutant stack size: " << mstack.size() << std::endl;
    std::cout << "normal stack size: " << sstack.size() << std::endl;
    std::cout << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "mutant stack top: " <<  mstack.top() << std::endl;
    std::cout << "normal stack top: " << sstack.top() << std::endl;
    std::cout << std::endl;
    ++it;
    --it;
    std::cout << "mutant stack content is: " << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    //std::stack<int> s(mstack);
    return 0;
}
