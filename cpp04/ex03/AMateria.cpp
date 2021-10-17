#include "AMateria.hpp"

AMateria::AMateria () {
    this->_type = "unknown";
}

AMateria::AMateria(std::string const & type) {
    this->_type = type;
}

AMateria::AMateria(const AMateria &other) {
    *this = other;
}

AMateria::~AMateria() {
}

AMateria& AMateria::operator= (const AMateria & other) {
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

const std::string & AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter &) {
}
