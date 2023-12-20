#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>
int main( void )
{
    Point a(0.0f, 0.0f);
    Point b(0.0f, 1.0f);
    Point c(1.0f, 1.0f);
    Point d(0.5f, 0.6f);

    std::cout << "Point result is " << Point::bsp(a, b, c, d) << std::endl;
    return 0;
}
