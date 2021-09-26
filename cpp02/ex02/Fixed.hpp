#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int _FixPValue;
    static const int _fractBits = 8;

public:
    /* canonical form */
    Fixed ();
    Fixed (const Fixed& other); //коструктор копирования
    ~Fixed ();
    const Fixed& operator= (const Fixed& other); //перегрузка оператора =
    /*canonical form enf */

    Fixed (const int num);
    Fixed (const float num);

    int getRawBits ( void ) const; //todo check it
    void setRawBits ( int const raw ); //todo check it

    float toFloat ( void ) const;
    int toInt ( void ) const;

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


    /* overload via friend functions */
    friend bool operator== (const Fixed &f1, const Fixed &f2);
    friend bool operator!= (const Fixed &f1, const Fixed &f2);
    friend bool operator> (const Fixed &f1, const Fixed &f2);
    friend bool operator< (const Fixed &f1, const Fixed &f2);
    friend bool operator>= (const Fixed &f1, const Fixed &f2);
    friend bool operator<= (const Fixed &f1, const Fixed &f2);

};

std::ostream& operator<< (std::ostream &out, const Fixed &fix); //перегрузка оператора <<

bool operator> (const Fixed &f1, const Fixed &f2); //перегрузка оператора >
bool operator< (const Fixed &f1, const Fixed &f2); //перегрузка оператора <
bool operator>= (const Fixed &f1, const Fixed &f2); //перегрузка оператора >=
bool operator<= (const Fixed &f1, const Fixed &f2); //перегрузка оператора <=
bool operator== (const Fixed &f1, const Fixed &f2); //перегрузка оператора ==
bool operator!= (const Fixed &f1, const Fixed &f2); //перегрузка оператора !=

#endif //FIXED_HPP
