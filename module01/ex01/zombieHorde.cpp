#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string pName)
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(pName);
		horde[i].anounce();
	}
	return (horde);
}