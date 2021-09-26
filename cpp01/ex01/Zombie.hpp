#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {

private:
    std::string _name;

public:
    Zombie ();
    Zombie (std::string name);
    ~Zombie ();

    void getName (std::string);
    void announce (void);

};

Zombie* zombieHorde( int N, std::string name );

#endif //ZOMBIE_HPP