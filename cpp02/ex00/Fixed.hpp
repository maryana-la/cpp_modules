#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int _FPValue;
    static const int _numBits = 8;

public:
    Fixed();
    ~Fixed();

    Fixed (const Fixed& other); //коструктор копирования

    const Fixed& operator= (const Fixed& other); //перегрузка оператора =

    int getRawBits( void ) const;
    void setRawBits( int const raw );

};

#endif //FIXED_HPP