#include <iostream>
#include "Fixed.hpp"

#include <iostream>
int main( void )
{
    Fixed a;
    Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed& ref = b;
    Fixed e = Fixed(2.0f);
    Fixed& ref2 = e;
    Fixed& c = Fixed::max(ref2, ref );
    Fixed& d = Fixed::min(b, c);
    Fixed f = Fixed(5.05f);
    std::cout << f << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min (a, b) << std::endl;
    std::cout << Fixed::max(b, c) << std::endl;
    std::cout << Fixed::min(b, c) << std::endl;
    std::cout << d++ << std::endl;

    Fixed   sumatory = Fixed(Fixed(123456.5f) + Fixed(654321.25f));
    std::cout << "Sumatory is Fixed(123456.5) + Fixed(654321.25)\nExpected: 777777.75\nReal: " << sumatory << std::endl;
    std::cout << "Raw bits are " << sumatory.getRawBits() << std::endl;
    return 0;
}
