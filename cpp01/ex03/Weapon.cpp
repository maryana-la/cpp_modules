#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(std::string type_of_weapon) {
    _type = type_of_weapon;
}

Weapon::~Weapon() {
}

void Weapon::setType (std::string weapon) {
    this->_type = weapon;
}

std::string const & Weapon::getType () const {
    return this->_type;
}