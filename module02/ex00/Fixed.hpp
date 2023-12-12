/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:38:28 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:38:28 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# ifndef DEBUG
#  define DEBUG 0
# endif

class Fixed
{
	private:

		int _value;
		static const int fractional = 8;

	public:
		//default constructor
		Fixed(void);
		//default destructor
		~Fixed(void);
		//copy constructor
		Fixed(Fixed& original);
		// = operator overload
		Fixed&	operator=(const Fixed& param);

		//Geters and seters
		int		getRawBits(void)const;
		void	setRawBits(int const raw);


};



#endif