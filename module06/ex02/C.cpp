/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:11:36 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/20 15:25:39 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"
#include <iostream>

C::C(void)
{
    std::cout << "C class type initialized" << std::endl;
}

C::~C(void)
{
    std::cout << "C class type destroyed" << std::endl;
}

std::string C::identityCheck(void)
{
    return ("C");
}
