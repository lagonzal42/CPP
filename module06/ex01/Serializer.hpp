/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:25 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/16 17:02:33 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

#include <string>

struct Data
{
	int		_int;
	char	_char;
};

class Serializer
{
		
	private:
		Serializer(void);
		~Serializer(void);
		Serializer(const Serializer& param);
		Serializer& operator=(const Serializer& param);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
