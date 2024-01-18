/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:32:05 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/28 21:32:05 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    Dog* j = new Dog();
    Animal *h = j;
    Animal* i = new Cat();
    std::cout << h->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    h->makeSound(); //will output the cat sound!
    j->makeSound();
    std::cout << std::endl;
    {
        Animal* k = new Dog(*j);
        k->getBrain()->setIdea("i want to eat", 0);
        std::cout << k->getBrain()->getIdea(0) << std::endl;
        std::cout << j->getBrain()->getIdea(0) << std::endl;
    }
    std::cout << std::endl;

    delete j;
    delete i;
    return 0;
}
