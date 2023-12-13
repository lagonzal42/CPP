#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed b( a );
    Fixed c;
    c = b;
    std::cout << "a raw bits is: " << a.getRawBits() << std::endl;
    std::cout << "b raw bits is: " << b.getRawBits() << std::endl;
    std::cout << "c raw bits is: " << c.getRawBits() << std::endl;
    return 0;
}
