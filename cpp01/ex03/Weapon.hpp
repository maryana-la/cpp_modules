#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon {
private:
    std::string _type;

public:
    Weapon();
    Weapon (std::string);
    ~Weapon ();

    void setType (std::string );
    std::string const & getType () const;
};

#endif //WEAPON_HPP