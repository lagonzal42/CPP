#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# ifndef DEBUG
#  define DEBUG 0
# endif

#include <iostream>
#include <string>

class Zombie
{
	private:
	
	//private atributes
		std::string name;

	public:

	//constructor

		Zombie(void);
	
	//constructor with parameters
	
		Zombie(std::string name);

	//copy constructor

		//Zombie(const Zombie& pZombie);

	//assingment operator overload

		//Zombie& operator=(const Zombie& pZombie);
	
	//destructor

		~Zombie(void);

	//geters and seters

		std::string	getName(void);

	//others
		void		anounce(void);

};
		Zombie*	newZombie(std::string pName);
		void	randomChump(std::string pName);

#endif
