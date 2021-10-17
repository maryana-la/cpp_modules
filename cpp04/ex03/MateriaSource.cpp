#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < MAX_MAT; i++) {
        _materias[i] = NULL;
    }
}

MateriaSource::MateriaSource (const MateriaSource & other) {
	for (int i = 0; i < MAX_MAT; i++) {
		if (other._materias[i] != NULL)
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
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
		if (other._materias[i] != NULL)
        	this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
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
    std::cout << "Materia list is full. Extra one is deleted" << std::endl;
	delete type;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < MAX_MAT; i++) {
        if (_materias[i] != NULL && _materias[i]->getType() == type) {
            return (_materias[i]->clone());
        }
    }
    return 0;
}
