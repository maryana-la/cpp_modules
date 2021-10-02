#include "Ice.hpp"

Ice::Ice () : AMateria("ice") {
//    std::cout << this->_type << " constructor" << std::endl;
}

Ice::Ice (const Ice & other) : AMateria(other) {
//    std::cout << "Copy constructor Ice" << std::endl;
}

Ice::~Ice() {
}

Ice& Ice::operator= (const Ice & other) {
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

AMateria *Ice::clone() const {
    return (new Ice(*this));
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}