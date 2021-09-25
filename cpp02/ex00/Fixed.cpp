#include "Fixed.hpp"

Fixed::Fixed () {
    _FPValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed () {
    std::cout << "Destructor called" << std::endl;
}

/*
 * copy constructor
 */

Fixed::Fixed (const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    this->_FPValue = other.getRawBits();
}

/*
 *  = overload
 */

const Fixed& Fixed::operator = (const Fixed& other) {
    std::cout << "Assignation operator called" << std::endl;
    this->_FPValue = other.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_FPValue;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    _FPValue = raw;
}
