#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int _rawValue;
    static const int _fractBits = 8;

public:
    /* canonical form */
    Fixed ();
    Fixed (const Fixed& other); //коструктор копирования
    Fixed (const int num);
    Fixed (const float num);
    ~Fixed ();
    Fixed& operator= (const Fixed& other); //перегрузка оператора =
    /*canonical form enf */

    int getRawBits () const;
    void setRawBits ( int const raw );

    float toFloat () const;
    int toInt () const;

    /* arithmetic */
    Fixed operator+ (const Fixed& other) const;
    Fixed operator- (const Fixed& other) const;
    Fixed operator* (const Fixed& other) const;
    Fixed operator/ (const Fixed& other) const;

    /* increment/decrement */
    Fixed operator++ (int);
    Fixed& operator++ ();
    Fixed operator-- (int);
    Fixed& operator-- ();

    /* min/max */
	static Fixed& min (Fixed& v1, Fixed& v2);
	static const Fixed& min (const Fixed& v1, const Fixed& v2);
	static Fixed& max (Fixed& v1, Fixed& v2);
	static const Fixed& max (const Fixed& v1, const Fixed& v2);

};

std::ostream& operator<< (std::ostream &out, const Fixed &fix); //перегрузка оператора <<

bool operator> (const Fixed &f1, const Fixed &f2); //перегрузка оператора >
bool operator< (const Fixed &f1, const Fixed &f2); //перегрузка оператора <
bool operator>= (const Fixed &f1, const Fixed &f2); //перегрузка оператора >=
bool operator<= (const Fixed &f1, const Fixed &f2); //перегрузка оператора <=
bool operator== (const Fixed &f1, const Fixed &f2); //перегрузка оператора ==
bool operator!= (const Fixed &f1, const Fixed &f2); //перегрузка оператора !=

#endif //FIXED_HPP
