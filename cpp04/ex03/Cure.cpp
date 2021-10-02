#include "Cure.hpp"

Cure::Cure () : AMateria("cure") {
//    std::cout << this->_type << " constructor" << std::endl;
}

Cure::Cure (const Cure & other) : AMateria(other) {
//    std::cout << "Copy constructor Cure" << std::endl;
}

Cure::~Cure() {
}

Cure& Cure::operator= (const Cure & other) {
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

AMateria *Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}