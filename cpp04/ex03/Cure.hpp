#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
private:
    std::string _type;
public:
    Cure ();
    Cure (const Cure & other);
    virtual ~Cure ();

    Cure& operator= (const Cure & other);

    virtual AMateria* clone () const;
    virtual void use (ICharacter& target);
};

#endif //CURE_HPP
