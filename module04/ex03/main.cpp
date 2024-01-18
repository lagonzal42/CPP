/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 19:13:58 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/03 19:13:58 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    std::cout << std::endl;
    ICharacter* me = new Character("Cloud");
    ICharacter* bob = new Character("bob");
    std::cout << std::endl;
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << std::endl;
    delete bob;
    delete me;
    delete src;
    return 0;
}
