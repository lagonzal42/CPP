#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    Harl    Karen;

    if (argc != 2)
        std::cout << "Expected an argument" << std::endl;
    else
        Karen.complain(argv[1]);
}