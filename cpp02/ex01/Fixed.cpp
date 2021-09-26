#include "Fixed.hpp"

/*
 *  Constructors:
 */

Fixed::Fixed () {
    _FixPValue = 0;
    std::cout << "Default constructor called" << std::endl;
}

    // copy constructor

Fixed::Fixed (const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // to use Assignation function
//    this->_FixPValue = other.getRawBits(); - also works
}

Fixed::Fixed (const int num) {
    _FixPValue = num << _fractBits;
//    _FixPValue = std::roundf(num * (1 << _fractBits)); - the same  as for float
    std::cout << "Int constructor called" <<std::endl;
}

Fixed::Fixed (const float num) {
    _FixPValue = roundf(num * (1 << _fractBits));
    std::cout << "Float constructor called" <<std::endl;
//    (fixed_point_t)(round(input * (1 << FIXED_POINT_FRACTIONAL_BITS)));
}

Fixed::~Fixed () {
    std::cout << "Destructor called" << std::endl;
}

/*
 *  member functions
 */

int Fixed::getRawBits( void ) const {
//    std::cout << "getRawBits member function called" << std::endl;
    return this->_FixPValue;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    _FixPValue = raw;
}

float Fixed::toFloat ( void ) const {
    float ret;
    ret = (float)_FixPValue / (float)(1 << _fractBits);
    return ret;
//    return ((double)input / (double)(1 << FIXED_POINT_FRACTIONAL_BITS));
}

int Fixed::toInt ( void ) const {
    int ret;
    ret = _FixPValue / (1 << _fractBits); // == / 256
    return ret;
//    return (_FixPValue >> _fractBits); - also works
}

/*
 *  Overload
*/

const Fixed& Fixed::operator= (const Fixed& other) {
    std::cout << "Assignation operator called" << std::endl;
    this->_FixPValue = other.getRawBits();
    return *this;
}

std::ostream& operator<< (std::ostream &out, const Fixed &fix)
{
    out << fix.toFloat();
    return out;
}
