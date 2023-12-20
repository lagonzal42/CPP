/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 00:24:33 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/20 00:24:33 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
	if (DEBUG)
		std::cout << "Default constructor called" <<std::endl;
	_x = Fixed();
	_y = Fixed();
}

Point::~Point(void)
{
	if (DEBUG)
		std::cout << "Default destructor called" <<std::endl;
}

Point::Point(float pX, float pY)
{
	if (DEBUG)
		std::cout << "Parameter constructor called" <<std::endl;
	_x = Fixed(pX);
	_y = Fixed(pY);
}

Point::Point(const Point& pPoint)
{
	if (DEBUG)
		std::cout << "Copy constructor called" <<std::endl;
	_x = Fixed(pPoint.getX());
	_y = Fixed(pPoint.getY());
}

Point&	Point::operator=(const Point& pPoint)
{
	if (DEBUG)
		std::cout << "Copy assingment called" <<std::endl;
	if (this != &pPoint)
	{
		this->_x = pPoint.getX();
		this->_y = pPoint.getY();
	}
	return (*this);
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

bool	Point::bsp(const Point a, const Point b, const Point c, const Point point)
{
	float abp, acp, bcp, abc;

	abp = Point::heron(a, b, point);
	acp = Point::heron(a, c, point);
	bcp = Point::heron(b, c, point);
	abc = Point::heron(a, b, c);
	if (abp == 0.0f || acp == 0.0f || bcp == 0.0f || abp + acp + bcp >= abc)
		return (false);
	else
		return (true);
}

float	Point::heron(const Point a, const Point b, const Point c)
{
	float	ab, ac, bc;
	float	semi;
	float	area;

	ab = Point::distance(a, b);
	ac = Point::distance(a, c);
	bc = Point::distance(b, c);
	semi = (ab + ac + bc) / 2;
	area = std::sqrt(semi * (semi - ab) * (semi - ac) * (semi - bc));
	return (area);
}

float	Point::distance(const Point a, const Point b)
{
	float distance = std::sqrt(std::pow(a.getX().toFloat() - b.getX().toFloat(), 2)
			+ std::pow(a.getY().toFloat() - b.getY().toFloat(), 2));
	return (distance);
}
