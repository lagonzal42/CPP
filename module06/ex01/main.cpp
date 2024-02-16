/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:39:56 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/16 18:47:52 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void)
{
    Data my_data;

    std::cout << "Direction is: " << &my_data << std::endl;
    std::cout << "Serialization is: " << Serializer::serialize(&my_data) << std::endl;
    std::cout << "Deserialization is: " << Serializer::deserialize(Serializer::serialize(&my_data)) << std::endl;
    
}
