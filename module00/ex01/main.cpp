
#include "Phonebook.hpp"
#include "iostream"

int	main(void)
{
	Phonebook	my_phonebook;
	std::string	input;

	std::cout << "Hello this is your nokia 3310 assistant" << std::endl;
	while (1)
	{
		std::cout << "What do you want to do?" << std::endl;
		std::cin >> input;
		if (input == "ADD")
			my_phonebook.add();
		else if (input == "SEARCH")
			my_phonebook.search();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Invalid input. Please try again" << std::endl;
	}

	return (0);
}