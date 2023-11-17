/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:11:36 by marvin            #+#    #+#             */
/*   Updated: 2023/11/17 01:11:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string	input;
	//char		c;
	//char		*input;

	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			input = argv[i];
			for (unsigned int n = 0; n < input.length(); n++)
			{
				input[n] = std::toupper(input[n]);
			}
			std::cout << input;
		}
		std::cout << std::endl;
	}
	else
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}