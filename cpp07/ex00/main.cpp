#include "whatever.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */

class Fixed {
private:
    int _rawValue;
    static const int _fractBits = 8;
public:
    Fixed () {}
    Fixed (const int num) { _rawValue = num << _fractBits; }
    Fixed (const float num) { _rawValue = (int)(num * (1 << _fractBits)); }
    Fixed (const Fixed& other) { this->_rawValue = other.getRawBits(); }
    ~Fixed () {}

    Fixed& operator= (const Fixed& other) { //перегрузка оператора =
        this->_rawValue = other.getRawBits();
        return *this;
    }

    float toFloat ( ) const {
        float ret;
        ret = (float)_rawValue / (float)(1 << _fractBits);
        return ret;
    }

    int getRawBits () const { return this->_rawValue; }
    void setRawBits ( int const raw ) { _rawValue = raw; }
};

bool operator== (const Fixed &f1, const Fixed &f2) { return (f1.getRawBits() == f2.getRawBits()); }
bool operator!= (const Fixed &f1, const Fixed &f2) { return (f1.getRawBits() != f2.getRawBits()); }
bool operator> (const Fixed &f1, const Fixed &f2) { return (f1.getRawBits() > f2.getRawBits()); }
bool operator< (const Fixed &f1, const Fixed &f2) { return (f1.getRawBits() < f2.getRawBits()); }
bool operator>= (const Fixed &f1, const Fixed &f2) { return (f1.getRawBits() >= f2.getRawBits()); }
bool operator<= (const Fixed &f1, const Fixed &f2) { return (f1.getRawBits() <= f2.getRawBits()); }

std::ostream& operator<< (std::ostream &out, const Fixed &fix) {
    out << fix.toFloat();
    return out;
}

int main( void ) {
    std::cout << RED << "*** MAIN FROM SUBJECT ***" << RESET << std::endl;
    int a = 2;
    int b = 3;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "SWAP: a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << std::endl << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "SWAP: c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;

    std::cout << std::endl << RED << "*** FUNCTION WITH CLASS FIXED ***" << RESET << std::endl;

    Fixed fix1(4);
    Fixed fix2(3.6f);

    std::cout << "fix1 = " << fix1 << ", fix2 = " << fix2 << std::endl;
    ::swap(fix1, fix2);
    std::cout << "SWAP: fix1 = " << fix1 << ", fix2 = " << fix2 << std::endl;
    std::cout << "min( fix1, fix2 ) = " << ::min( fix1, fix2 ) << std::endl;
    std::cout << "max( fix1, fix2 ) = " << ::max( fix1, fix2 ) << std::endl;

    return 0;
}

/*  example output:

a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
*/


//
//class Awesome {
//private:
//    int _n;
//public:
//    Awesome (): _n(0) {}
//    Awesome (int n): _n (n) {}
//    Awesome &operator= (Awesome &a) { _n = a._n; return *this; }
//    bool operator== (Awesome const &rhs) const { return (this->_n == rhs._n); }
//    bool operator!= (Awesome const &rhs) const { return (this->_n != rhs._n); }
//    bool operator> (Awesome const &rhs) const { return (this->_n > rhs._n); }
//    bool operator< (Awesome const &rhs) const { return (this->_n < rhs._n); }
//    bool operator>= (Awesome const &rhs) const { return (this->_n >= rhs._n); }
//    bool operator<= (Awesome const &rhs) const { return (this->_n <= rhs._n); }
//    int get_n() const { return _n; }
//};
//std::ostream& operator<< (std::ostream &o, const Awesome &a) { o << a.get_n(); return o; }
//
//int main ()
//{
//    Awesome a(2), b(4);
//    swap (a, b);
//    std::cout << a << " " << b << std::endl;
//    std::cout << max(a,b) << std::endl;
//    std::cout << min(a,b) << std::endl;
//    return 0;
//}


