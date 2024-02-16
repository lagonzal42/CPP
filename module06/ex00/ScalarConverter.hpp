/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:56:25 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/16 18:34:13 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#define PSEUDO -1
#define CHARAC 0
#define INTEG 1
#define FLOAT 2
#define DOUBLE 3
#define NONE 4
# ifndef DEBUG
#  define DEBUG 0
# endif

class ScalarConverter
{
	public:
		static bool convert(std::string &str);
		
	private:
		~ScalarConverter(void);
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& param);
		ScalarConverter& operator=(const ScalarConverter& param);
		
};

int     checkType(std::string &str);
bool    isPseudo(std::string &str);
bool    isChar(std::string &str);
bool    isInt(std::string &str);
bool    isFloat(std::string &str);
bool    isDouble(std::string &str);
bool	numberFormat(std::string &str);

#endif
