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
		int		operator+(const Fixed& param);
		int		operator-(const Fixed& param);
		int		operator*(const Fixed& param);
		int		operator/(const Fixed& param);

		// preincrement/postincrement operator overload
		void	operator++(void);
		void	operator++(int post);

		// predecrement/postdecrement operator overload
		void	operator--(void);
		void	operator--(int post);

		//Other methods
		int		toInt(void) const;
		float	toFloat(void) const;

		//Geters and seters
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};

#endif
