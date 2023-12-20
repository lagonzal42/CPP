#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>
int main( void )
{
    Point a(0.0f, 0.0f);
    Point b(2.0f, 2.0f);
    Point c(0.0f, 2.0f);
    Point d(0.048f, 1.8f);

    std::cout << "Point result is " << Point::bsp(a, b, c, d) << std::endl;
    return 0;
}
