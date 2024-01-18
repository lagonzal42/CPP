/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:58:07 by lagonzal          #+#    #+#             */
/*   Updated: 2024/01/03 15:58:07 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSouce.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*   memory[4];

	public:
		//default constructor
		MateriaSource(void);
		
		//copy constructor
		MateriaSource(const MateriaSource& param);

		// default destructor
		~MateriaSource(void);

		//=operator override
		MateriaSource&	operator=(const MateriaSource& param);

		//previous virtual methods
		AMateria*	getMateria(int idx) const;
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(const std::string& pType);
};

#endif
