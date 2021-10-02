#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < MAX_MAT; i++) {
        _materias[i] = NULL;
    }
}

MateriaSource::MateriaSource (const MateriaSource & other) {
    *this = other;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < MAX_MAT; i++) {
        if (_materias[i] != NULL)
            delete _materias[i];
    }
}

MateriaSource& MateriaSource::operator= (const MateriaSource & other) {
    for (int i = 0; i < MAX_MAT; i++) {
        if (this->_materias[i])
            delete this->_materias[i];
        this->_materias[i] = other._materias[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* type) {
    for (int i = 0; i < MAX_MAT; i++) {
        if (_materias[i] == NULL) {
            _materias[i] = type;
            return ;
        }
    }
    std::cout << "Materia list is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < MAX_MAT; i++) {
        if (_materias[i] != NULL && _materias[i]->getType() == type) {
            return (_materias[i]->clone());
        }
    }
    return 0;
}
