/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:12:13 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/20 15:32:45 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
    {
        Base baseTest;

        Base *base = baseTest.generate();
        baseTest.identify(base);
        baseTest.identify(*base);
        delete base;
    }
}
