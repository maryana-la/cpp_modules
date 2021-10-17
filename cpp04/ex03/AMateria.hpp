#include <iostream>

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define MAX_MAT 4

class ICharacter;

class AMateria
{
private:
    AMateria();
protected:
    std::string _type;

public:
    AMateria(std::string const & type);
    AMateria(const AMateria & other);
    virtual ~AMateria();

    AMateria& operator= (const AMateria & other);

    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif //AMATERIA_HPP