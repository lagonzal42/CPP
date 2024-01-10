/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:37:49 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:37:49 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#ifndef DEBUG
# define DEBUG 0
#endif

int main(int argc, char **argv)
{
	if (DEBUG)
		std::cout << "Argument number is " << argc << std::endl;
	if (argc != 4 || !argv[2][0] || !argv[3][0])
	{
		std::cout << "Incorrect number of parameters, expected 3, got " << argc - 1 << std::endl;
		return (1);
	}
	
	std::ifstream inFile(argv[1]);
	std::ofstream outFile("outfile.txt");
	
	if (!inFile.is_open())
	{
		std::cout << "File couldnt be opened" << std::endl;
		return (1);
	}
	else if (DEBUG)
		std::cout << "File opened succesfully" << std::endl;
	
	std::string	fileInput;
	size_t findPos;

	if (DEBUG)
		std::cout << "File content is:" << std::endl << fileInput << std::endl;
	while (std::getline(inFile, fileInput))
	{
		findPos = fileInput.find(argv[2]);
		while (findPos != std::string::npos)
		{
			std::string previous	= fileInput.substr(0, findPos);
			std::string after		= fileInput.substr(findPos + std::string(argv[2]).length());
			fileInput = previous + argv[3] + after;
			findPos = fileInput.find(argv[2]);
		}
		outFile << fileInput << "\n";
		if (inFile.eof())
			break;
	}
	inFile.close();
	outFile.close();
}
