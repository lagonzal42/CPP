/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:05:58 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/20 15:25:33 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include <iostream>

A::A(void)
{
    std::cout << "A class type initialized" << std::endl;
}

A::~A(void)
{
    std::cout << "A class type destroyed" << std::endl;
}

std::string A::identityCheck(void)
{
    return ("A");
}
