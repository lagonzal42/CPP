#ifndef __WEAPON_H__
# define __WEAPON_H__

#include <string>

class Weapon
{
	private:

		std::string type;

	public:

	// Constructor
	Weapon(std::string type);

	// Destructor
	~Weapon(void);

	// geters and seters
	std::string	    getType(void);
	void		    setType(std::string pType);
};

#endif
