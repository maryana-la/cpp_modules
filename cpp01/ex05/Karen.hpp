#include <iostream>

#ifndef KAREN_HPP
#define KAREN_HPP

class Karen {
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    Karen();
    ~Karen();

    typedef void (Karen:: * funcPTR)();
    funcPTR message[4];

    void complain( std::string level );
};

#endif //KAREN_HPP