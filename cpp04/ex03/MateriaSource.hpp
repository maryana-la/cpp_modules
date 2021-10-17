#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource {
private:
    AMateria* _materias[MAX_MAT];
public:
    MateriaSource();
    MateriaSource (const MateriaSource & other);
    virtual ~MateriaSource();

    MateriaSource& operator= (const MateriaSource & other);

    virtual void learnMateria(AMateria*);
    virtual AMateria* createMateria(std::string const & type);
};

#endif //MATERIASOURCE_HPP
