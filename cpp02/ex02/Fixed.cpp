#include "Fixed.hpp"

/*
 *  Constructors:
 */

Fixed::Fixed () {
    _rawValue = 0;
}

Fixed::Fixed (const Fixed& other) {
//    std::cout << "Copy constructor called" << std::endl;
    this->_rawValue = other.getRawBits(); //
}

Fixed::Fixed (const int num) {
    _rawValue = num << _fractBits;
//    std::cout << "Int constructor called" <<std::endl;
}

Fixed::Fixed (const float num) {
    _rawValue = (int) roundf(num * (1 << _fractBits));
//    std::cout << "Float constructor called" <<std::endl;
}

Fixed::~Fixed () {
//    std::cout << "Destructor called" << std::endl;
}

/*
 *  member functions
 */

int Fixed::getRawBits( ) const {
    return this->_rawValue;
}

void Fixed::setRawBits( int const raw ) {
    _rawValue = raw;
}

float Fixed::toFloat ( ) const {
    float ret;
    ret = (float)_rawValue / (float)(1 << _fractBits);
    return ret;
}

int Fixed::toInt ( ) const {
    int ret;
    ret = _rawValue / (1 << _fractBits);
    return ret;
}

/*
 *  Overload
*/

Fixed& Fixed::operator= (const Fixed& other) {
//    std::cout << "Assignation operator called" << std::endl;
    this->_rawValue = other.getRawBits();
    return *this;
}

std::ostream& operator<< (std::ostream &out, const Fixed &fix)
{
    out << fix.toFloat();
    return out;
}

/* comparison operators*/

bool operator> (const Fixed &f1, const Fixed &f2) {
    return (f1._rawValue > f2._rawValue);
}

bool operator< (const Fixed &f1, const Fixed &f2) {
    return (f1._rawValue < f2._rawValue);
}

bool operator>= (const Fixed &f1, const Fixed &f2) {
    return (f1._rawValue >= f2._rawValue);
}

bool operator<= (const Fixed &f1, const Fixed &f2) {
    return (f1._rawValue <= f2._rawValue);
}

bool operator== (const Fixed &f1, const Fixed &f2) {
    return (f1._rawValue == f2._rawValue);
}

bool operator!= (const Fixed &f1, const Fixed &f2) {
    return !(f1 == f2);
}

/* arithmetic operators */
Fixed Fixed::operator+ (const Fixed& other) const {
    Fixed new_ex;
    new_ex.setRawBits (this->_rawValue + other.getRawBits());
    return (new_ex);
}

Fixed Fixed::operator- (const Fixed& other) const {
    Fixed new_ex;
    new_ex.setRawBits (this->_rawValue - other.getRawBits());
    return (new_ex);
}

Fixed Fixed::operator* (const Fixed& other) const { //todo check in main
    Fixed new_ex;
    new_ex.setRawBits ((this->_rawValue * other.getRawBits()) / (1 << _fractBits));
    return (new_ex);
}

Fixed Fixed::operator/ (const Fixed& other) const { //todo check in main
    Fixed new_ex;
    float temp;

    temp = (float)this->getRawBits() / (float)other.getRawBits();
    new_ex.setRawBits((int)roundf(temp * (1 << _fractBits)));
    return (new_ex);
}

/* in-, decrements */
Fixed Fixed::operator++ (int) {
    Fixed temp (*this);
    this->_rawValue += 1;
    return temp;
}

Fixed& Fixed::operator++ () {
    this->_rawValue += 1;
    return (*this);
}

Fixed Fixed::operator-- (int) {
    Fixed temp (*this);
    this->_rawValue -= 1;
    return temp;
}

Fixed& Fixed::operator-- () {
    this->_rawValue -= 1;
    return (*this);
}

/* min/max */
Fixed& Fixed::min (Fixed& v1, Fixed& v2) {
	if (v1 < v2)
		return v1;
	return v2;
}

const Fixed& Fixed::min (const Fixed& v1, const Fixed& v2) {
	return (v1 < v2 ? v1 : v2);
}

Fixed& Fixed::max (Fixed& v1, Fixed& v2) {
	if (v1 > v2)
		return v1;
	return v2;
}

const Fixed& Fixed::max (const Fixed& v1, const Fixed& v2) {
	return (v1 > v2 ? v1 : v2);
}

