#include "Zombie.hpp"

int main(void)
{
	Zombie* myHorde = zombieHorde(10, "Dave");
	

	delete[] myHorde;
}