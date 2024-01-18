/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:18:33 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/02 16:18:33 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		//	Constructor
		Brain(void);

		//	Copy constructor
		Brain(const Brain& param);

		//	Destructor
		~Brain(void);

		//	Assignment operator override
		Brain &operator=(const Brain &param);
	
		//	geters and setters
		void		setIdea(std::string idea, int index);
		std::string	getIdea(int index) const;
};

#endif
