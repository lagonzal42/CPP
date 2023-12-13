/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <lagonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:36:08 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/13 20:20:26 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# ifndef DEBUG
#  define DEBUG 0
# endif
# include "Contact.hpp"
# include <string>

class Phonebook
{
	private:

	//private atributes
		static const int	ARRAY_SIZE = 8;
		Contact				contactList[ARRAY_SIZE];
		int					contactCount;

	public:

	//constructor

	Phonebook (void);

	//copy constructor

	Phonebook (const Phonebook& param);

	//assingment operator
	Phonebook& operator=(const Phonebook& param);

	//destructor

	~Phonebook (void);

	//getters and seters

	int	getContactCount(void);

	//other methods
	void	print(void);

	//mandatory
	void			add(void);
	std::string		check_input(void);
	unsigned int	check_phone(void);
	bool			isnumeric(std::string);
	void			addBack(Contact pContact);
	void			moveForward(Contact pContact);
	void			search(void);
	std::string		trimmer(std::string);
};
#endif
