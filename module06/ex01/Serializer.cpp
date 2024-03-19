/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:34:20 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/12 16:50:59 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {}

Serializer::~Serializer(void) {}

Serializer::Serializer(const Serializer&) {}

uintptr_t   Serializer::serialize(Data *ptr)
{
    
    return (reinterpret_cast <uintptr_t>(ptr));
}

Data*   Serializer::deserialize(uintptr_t serialized)
{
    return (reinterpret_cast<Data *>(serialized));
}
