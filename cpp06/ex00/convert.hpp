#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <iomanip>     /* std::setprecision */
#include <cctype>      /* isdigit */
#include <cstdlib>     /* strtod */

class ErrorInput : public std::exception {
public:
    virtual const char*	what () const throw();
};

class OverflowLimits : public std::exception {
public:
    virtual const char*	what () const throw();
};

void infExceptionCast(std::string str);
void SingleCharPrint (int x);
double checkStringValid (std::string str);

void printChar (double n);
void printInt (double n);
void printFloat (double n);
void printDouble (double n);


#endif //CONVERT_H
