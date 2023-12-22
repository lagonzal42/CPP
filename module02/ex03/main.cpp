#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>
int main( void )
{
	Point	a(0.0f, 0.0f);
	Point	b(2.0f, 2.0f);
	Point	c(0.0f, 2.0f);
	Point	p(1.39f, 1.5f);
	bool	inside = Point::bsp(a, b, c, p);

	std::cout << "Point result is " << inside << std::endl;
	return 0;
}
