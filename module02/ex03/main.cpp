#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>
int main( void )
{
	Point	a(0.0f, 0.0f);
	Point	b(2.0f, 2.0f);
	Point	c(0.0f, 2.0f);
	Point	p(1.89f, 1.9f);
	bool	inside = Point::bsp(a, b, c, p);

	if (inside)
		std::cout << "Point is inside" << std::endl;
	else
		std::cout << "Point is outside" << std::endl;
	return 0;
}
