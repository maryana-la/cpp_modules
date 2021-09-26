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

    void announce (void);

};

Zombie* newZombie( std::string name );

void    randomChump( std::string name );

#endif //ZOMBIE_HPP