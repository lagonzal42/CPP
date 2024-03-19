/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 23:14:12 by lagonzal          #+#    #+#             */
/*   Updated: 2024/02/27 23:14:12 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_numbers;
		
		Span(void);
		Span(const Span& param);
	
	public:
		Span(int pN);
		~Span(void);
		Span&	operator=(const Span& param);

		void	addNumber(int in);
		void	addNumbers();
		int		shortestSpan(void);
		int		longestSpan(void);

		class SpanAlreadyFullException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("The span is already full");
				}
		};

		class LessThanTwoMembersException : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return ("The span has less than 2 memebers");
				}
		};
};

#endif //Span.hpp
