#ifndef HUMANA_H
# define HUMANA_H

# ifndef DEBUG
#  define DEBUG 0
# endif

#include "Weapon.hpp"

class HumanA
{
	private:

		std::string	_name;
		Weapon* 	_weapon;

	public:

		HumanA(std::string pName, Weapon& pWeapon);
		~HumanA(void);

		void	attack(void);
};

#endif