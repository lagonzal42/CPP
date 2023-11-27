#include "Zombie.hpp"

Zombie	printname(void)
{
	Zombie otherZombie("Albert");
	std::cout << "new zombies name is " << otherZombie.getName() << std::endl;
	return (otherZombie);
}

int main(void)
{
	Zombie* myZombie = newZombie("Brandon");
	randomChump("Oscar");
	Zombie otherZombie = printname();

	std::cout << "my zombies name is " << myZombie->getName() << std::endl;
	delete myZombie;
}