/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:38:15 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:38:15 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

#include <string>

class Harl
{
	private:

		static std::string _options[4];

		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
	
	public:	
		
		Harl(void);
		~Harl(void);
		void	complain(std::string level);
};

#endif //HARL_HPP
