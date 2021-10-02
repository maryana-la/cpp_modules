#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
    std::string _name;
    AMateria* _materias[MAX_MAT];
    Character();

public:
    Character (std::string const & type);
    Character (const Character & other);

    virtual ~Character();

    Character& operator= (const Character & other);

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif //CHARACTER_HPP
