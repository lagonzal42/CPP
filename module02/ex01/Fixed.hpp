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
		// = operator overload
		Fixed&	operator=(const Fixed& param);

		//Other methods
		int		toInt(void);
		float	toFloat(void);

		//Geters and seters
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
};



#endif
