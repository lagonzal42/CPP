/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagonzal <larraingonzalez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 00:24:31 by lagonzal          #+#    #+#             */
/*   Updated: 2023/12/20 00:24:31 by lagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;
	public:
		// default constructor
		Point(void);
		
		// default destructor
		~Point(void);

		// Parameter constructor
		Point(float pX, float pY);

		// copy constructor
		Point(const Point& pPoint);

		// = operator overload
		Point&	operator=(const Point& point);

		// geters and setters
		Fixed	getX(void) const;
		Fixed	getY(void) const;

		// binary space partitioning
		static bool		bsp(const Point a, const Point b, const Point c, const Point point);
		static Fixed	heron(const Point a, const Point b, const Point c);
		static Fixed	distance(const Point a, const Point b);
};


#endif
