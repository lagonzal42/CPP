/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:15:42 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/20 15:21:14 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Roger("Roger");

    Roger.attack("Corrector");
    Roger.takeDamage(10);
    Roger.attack("Corrector");
    
    ClapTrap Stuart("Stuart");
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
    Stuart.takeDamage(4);
    Stuart.beRepaired(2);
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
    Stuart.attack("Corrector");
}
