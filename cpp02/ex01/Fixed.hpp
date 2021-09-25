#include <iostream>
#include <cmath>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int _FixPValue;
    static const int _fractBits = 8;

public:
    Fixed ();
    Fixed (const Fixed& other); //коструктор копирования
    Fixed (const int num);
    Fixed (const float num);
    ~Fixed ();

    const Fixed& operator= (const Fixed& other); //перегрузка оператора =

    int getRawBits ( void ) const;
    void setRawBits ( int const raw );

    float toFloat ( void ) const;
    int toInt ( void ) const;

    friend std::ostream& operator<< (std::ostream &out, const Fixed &fix); //перегрузка оператора <<

};

std::ostream& operator<< (std::ostream &out, const Fixed &fix);

#endif //FIXED_HPP
