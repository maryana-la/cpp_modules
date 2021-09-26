#include <iostream>
#include "Fixed.hpp"


int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << " a " << std::endl;
    std::cout << ++a <<  " ++a " << std::endl;
    std::cout << a << " a " << std::endl;
    std::cout << a++ << " a++ " << std::endl;
    std::cout << a << " a " << std::endl;
    std::cout << b << " b "<< std::endl;
	std::cout << b / a << " b / a"<< std::endl;
    std::cout << Fixed::max( a, b ) << " max" << std::endl;
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