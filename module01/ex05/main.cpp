#include "Harl.hpp"
#include <iostream>

int main(void)
{
	std::string	input;
	Harl		karen;

	std::cout << "options are:  DEBUG, INFO, WARNING, ERROR" << std::endl;
	std::cout << "What do you want karen to do?" << std::endl;
	std::cin >> input;
	while (input.compare("EXIT"))
	{
		karen.complain(input);
		std::cout << "options are:  DEBUG, INFO, WARNING, ERROR" << std::endl;
		std::cout << "What do you want karen to do?" << std::endl;
		std::cin >> input;
	}
}