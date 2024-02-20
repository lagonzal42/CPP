/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:11:25 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/20 15:08:29 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include <iostream>

B::B(void)
{
    std::cout << "B class type initialized" << std::endl;
}

B::~B(void)
{
    std::cout << "B class type destroyed" << std::endl;
}

std::string B::identityCheck(void)
{
    return ("B");
}
