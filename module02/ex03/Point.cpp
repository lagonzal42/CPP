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
	Fixed abp, acp, bcp, abc, zero, subtriangles;

	abp = Point::heron(a, b, point);
	acp = Point::heron(a, c, point);
	bcp = Point::heron(b, c, point);
	abc = Point::heron(a, b, c);
	std::cout << "abp: " << abp << " acp: " << acp << " bcp: " << bcp << " abc: " << abc << "sum: " << abp + acp + bcp << std::endl;
	zero = Fixed();
	if (abp == zero || acp == zero || bcp == zero || abp + acp + bcp >= abc)
		return (false);
	else
		return (true);
}

Fixed	Point::heron(const Point a, const Point b, const Point c)
{
	Fixed	ab, ac, bc;
	Fixed	semi;
	Fixed	temp, area;

	ab = Point::distance(a, b);
	ac = Point::distance(a, c);
	bc = Point::distance(b, c);
	semi = (ab + ac + bc) / Fixed(2);
	std::cout << "semi is " << semi << " ab " << ab << " ac " << ac << " bc " << bc << std::endl;
	temp = (semi * (semi - ab) * (semi - ac) * (semi - bc));
	std::cout << "temp is: " << temp << std::endl;
	area = Fixed(std::sqrt(temp.toFloat()));
	return (area);
}

Fixed	Point::distance(const Point a, const Point b)
{
	// float distance = std::sqrt(std::pow(a.getX().toFloat() - b.getX().toFloat(), 2)
	// 		+ std::pow(a.getY().toFloat() - b.getY().toFloat(), 2));
	Fixed distance;
	
	Fixed  fix_dis = ((a.getX() - b.getX()) * (a.getX() - b.getX()) + (a.getY() - b.getY()) * (a.getY() - b.getY()));
	distance = Fixed(std::sqrt(fix_dis.toFloat())); 
	return (distance);
}
