/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:36:13 by lagonzal          #+#    #+#             */
/*   Updated: 2024/03/11 20:36:13 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <algorithm>

#ifndef DEBUG
# define DEBUG 0
#endif

class BitcoinExchange
{
	private:

		std::map<std::string, double> _db;
		
		BitcoinExchange(const BitcoinExchange&);
		const BitcoinExchange& operator=(const BitcoinExchange& p);
	
	public:
		
		BitcoinExchange(void);
		~BitcoinExchange(void);
		bool			createDB(void);
		static bool		checkDateFormat(const std::string& date);
		static bool		checkNumFormat(const std::string& value);
		void			exchange(std::string inputPath);

};