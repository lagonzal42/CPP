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

#include <ostream>

class Fixed
{
	private:

		int _value;
		static const int _fractional = 8;

	public:
		//default constructor
		Fixed(void);

		//default destructor
		~Fixed(void);

		//integer value constructor
		Fixed(int value);
		
		//float value constructor
		Fixed(float value);

		//copy constructor
		Fixed(const Fixed& original);

		// asignment operator overload
		Fixed&	operator=(const Fixed& param);
		
		// comparison operator overload
		bool	operator>(const Fixed& param);
		bool	operator<(const Fixed& param);
		bool	operator>=(const Fixed& param);
		bool	operator<=(const Fixed& param);
		bool	operator==(const Fixed& param);
		bool	operator!=(const Fixed& param);

		// aritmetic operator overload
		Fixed		operator+(const Fixed& param);
		float		operator-(const Fixed& param);
		float		operator*(const Fixed& param);
		float		operator/(const Fixed& param);

		// preincrement/postincrement operator overload
		Fixed&	operator++(void);
		Fixed	operator++(int);

		// predecrement/postdecrement operator overload
		Fixed&	operator--(void);
		Fixed	operator--(int);

		// stream output operator overload
		friend std::ostream&	operator<<(std::ostream& os, const Fixed& parameter);
		
		// Conversion operations
		int		toInt(void) const;
		float	toFloat(void) const;

		//Geters and seters
		int		getRawBits(void)const;
		void	setRawBits(int const raw);

		// max and min functions
		static Fixed&		min(Fixed& p1, Fixed& p2);
		static const Fixed&	min(const Fixed& p1, const Fixed& p2);
		static Fixed&		max(Fixed& p1, Fixed& p2);
		static const Fixed&	max(const Fixed& p1, const Fixed& p2);
};


#endif
