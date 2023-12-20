/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 21:38:25 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/10 21:38:25 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <iomanip>


Fixed::Fixed(void)
{
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::~Fixed(void)
{
	if (DEBUG)
		std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(int value)
{
	if (DEBUG)
		std::cout << "Integer constructor called" << std::endl;
	_value = value << 8;
}

Fixed::Fixed(float value)
{
	if (DEBUG)
		std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _fractional));
}

Fixed::Fixed(const Fixed& original)
{
	if (DEBUG)
        std::cout << "Copy constructor called" << std::endl;
	_value = original.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& param)
{
	if (DEBUG)
        std::cout << "Assignment operator called" << std::endl;
	if (this != &param)
		this->_value = param.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& param)
{
	if (DEBUG)
		std::cout << " > operator called" << std::endl; 
	return (this->toFloat() > param.toFloat());
}

bool	Fixed::operator<(const Fixed& param)
{
	if (DEBUG)
		std::cout << " < operator called" << std::endl;
	return (this->toFloat() < param.toFloat());
}

bool	Fixed::operator>=(const Fixed& param)
{
	if (DEBUG)
		std::cout << " >= operator called" << std::endl;
	return (this->operator>(param) || this->operator==(param));
}

bool	Fixed::operator<=(const Fixed& param)
{
	if (DEBUG)
		std::cout << " <= operator called" << std::endl;
	return (this->operator<(param) || this->operator==(param));
}

bool	Fixed::operator!=(const Fixed& param)
{
	if (DEBUG)
		std::cout << " != operator called" << std::endl;
	return (this->toFloat() != param.toFloat());
}

bool	Fixed::operator==(const Fixed& param)
{
	if (DEBUG)
		std::cout << " == operator called" << std::endl;
	return (!(this->operator!=(param)));
}

// aritmetic operator overload

Fixed	Fixed::operator+(const Fixed& param)
{
	if (DEBUG)
		std::cout << " + operator called" << std::endl;
	Fixed sum = Fixed();
	sum.setRawBits(param.getRawBits() + this->getRawBits());
	return (sum);
}

float	Fixed::operator-(const Fixed& param)
{
	if (DEBUG)
		std::cout << " - operator called" << std::endl;
	return (this->toFloat() - param.toFloat());

}

float	Fixed::operator*(const Fixed& param)
{
	if (DEBUG)
		std::cout << " * operator called" << std::endl;
	return (this->toFloat() * param.toFloat());

}

float	Fixed::operator/(const Fixed& param)
{
	if (DEBUG)
		std::cout << " / operator called" << std::endl;
	return (this->toFloat() / param.toFloat());
}

// preincrement/postincrement operator overload

Fixed&	Fixed::operator++(void)
{
	if (DEBUG)
		std::cout << "preincrement operator called" << std::endl;
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;;

	if (DEBUG)
		std::cout << "postincrement operator called" << std::endl;
	this->_value++;
	return (old);
}

// predecrement/postdecrement operator overload

Fixed&	Fixed::operator--(void)
{
	if (DEBUG)
		std::cout << "predecrement operator called" << std::endl;
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	
	if (DEBUG)
		std::cout << "postdecrement operator called" << std::endl;
	this->_value--;
	return (old);
}

// stream output operator overload
std::ostream&	operator<<(std::ostream& os, const Fixed& parameter)
{
	os << "The fixed number is " << std::setiosflags(std::ios::fixed) << std::setprecision(9) << parameter.toFloat() << " as float and " << parameter.toInt() << " as int" << std::endl;
	return (os);
}
		

int	Fixed::toInt(void) const
{
	return (_value >> 8);
}

float	Fixed::toFloat(void) const
{
	float epsilon = 1.0f / (1 << (_fractional + 1));
    return (static_cast<float>(_value) + epsilon) / (1 << _fractional);
}

int	Fixed::getRawBits(void) const
{
	if (DEBUG)
        std::cout << "getRawBits member fucntion called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	if (DEBUG)
        std::cout << "setRawBits member fucntion called" << std::endl;
	this->_value = raw;
}

// max and min functions
Fixed&	Fixed::min(Fixed& p1, Fixed& p2)
{
	if (p1 < p2)
		return (p1);
	return (p2);
}

const Fixed&	Fixed::min(const Fixed& p1, const Fixed& p2)
{
	if ((Fixed) p1 < p2)
		return (p1);
	return (p2);
}

Fixed&	Fixed::max(Fixed& p1, Fixed& p2)
{
	if (p1 > p2)
		return (p1);
	return (p2);
}

const Fixed&	Fixed::max(const Fixed& p1, const Fixed& p2)
{
	if ((Fixed) p1 > p2)
		return (p1);
	return (p2);
}

