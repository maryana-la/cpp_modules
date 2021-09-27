#include <iostream>
#include "Fixed.hpp"


int main( void ) {
    Fixed a;
    Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << " a " << std::endl;
    std::cout << ++a <<  " ++a " << std::endl;
    std::cout << a << " a " << std::endl;
    std::cout << a++ << " a++ " << std::endl;
    std::cout << a * b << " a * b" << std::endl;

    std::cout << b / a << " b / a" << std::endl;
    std::cout << a << " a to float" << std::endl;
    std::cout << b << " b to float"<< std::endl;
    std::cout << a.toInt() << " a to int" << std::endl;
    std::cout << b.toInt() << " b to int" << std::endl;

    Fixed const c(15.15f), d(3);
    std::cout << c << " c" << std::endl;
    std::cout << d << " d" << std::endl;
	std::cout << c / d << " c / d"<< std::endl;
    std::cout << Fixed::max( a, b ) << " max a b" << std::endl;
    std::cout << Fixed::min( c, d ) << " min c d" << std::endl;
    std::cout << Fixed::max( a, c ) << " max a c" << std::endl;
    return 0;
}


//Should output something like (I deleted the ctors/dtor logs):
//$> ./a.out 0
//0.00390625
//0.00390625
//0.00390625
//0.0078125
//10.1016
//10.1016
//$>