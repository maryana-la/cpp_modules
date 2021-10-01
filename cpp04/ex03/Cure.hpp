#include "Amateria.hpp"
#include <iostream>

#ifndef CPP_CURE_HPP
#define CPP_CURE_HPP

class Cure : public AMateria {
public:
    Cure ();
    Cure (std::string const & type);
    ~Cure ();

    Cure& operator= (const Cure & other);
    //надо переопределить
    AMateria* clone (const AMateria & other) const;
    void use (ICharacter& target);
};

#endif //CPP_CURE_HPP
