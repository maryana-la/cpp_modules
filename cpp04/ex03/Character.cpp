#include "Character.hpp"

Character::Character () {
	for (int i = 0; i < MAX_MAT; i++)
		_materias[i] = 0;
}

Character::Character (std::string const & type) {
    this->_name = type;
    for (int i = 0; i < MAX_MAT; i++) {
        _materias[i] = 0;
    }
}

Character::Character (const Character & other) {
	this->_name = other._name;
	for (int i = 0; i < MAX_MAT; i++) {
		if (other._materias[i] != NULL)
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

Character::~Character() {
    for (int i = 0; i < MAX_MAT; i++) {
        if (_materias[i] != NULL)
            delete _materias[i];
    }
}

Character& Character::operator= (const Character & other) {
    this->_name = other._name;
    for (int i = 0; i < MAX_MAT; i++) {
        if (this->_materias[i] != NULL)
            delete this->_materias[i];
        if (other._materias[i] != NULL)
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
    }
    return (*this);
}

std::string const & Character::getName() const {
    return (this->_name);
}

void Character::equip(AMateria* m) {
    int i;
    for (i = 0; i < MAX_MAT; i++) {
        if (_materias[i] == NULL) {
            _materias[i] = m;
            return ;
        }
    }
    std::cout << "Materia list is full" << std::endl;
}

void Character::unequip(int idx) {
    if (idx < MAX_MAT && idx >= 0 && _materias[idx] != 0)
        _materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (idx < MAX_MAT && idx >= 0 && _materias[idx] != 0)
        _materias[idx]->use (target);
    else
        std::cout << "Invalid arguments" << std::endl;
}