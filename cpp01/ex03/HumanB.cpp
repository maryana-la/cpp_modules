#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->_name = name;
    this->_weapon = NULL;
    std::cout << name << " created" << std::endl;
}

HumanB::~HumanB() {
    std::cout << _name << " is gone" <<std::endl;
}

void HumanB::setWeapon(Weapon &weapon_type) {
    this->_weapon = &weapon_type;
}

void HumanB::attack() {
    if (this->_weapon == NULL)
        std::cout << _name << " runs away" << std::endl;
    else
        std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
