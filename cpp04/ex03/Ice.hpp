#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
private:
    std::string _type;
public:
    Ice ();
    Ice (const Ice & other);
    virtual ~Ice ();

    Ice& operator= (const Ice & other);

    //надо переопределить
    virtual AMateria* clone () const;
    virtual void use (ICharacter& target);
};

#endif //ICE_HPP
