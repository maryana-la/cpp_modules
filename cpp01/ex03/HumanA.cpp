#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type):_name(name), _weapon(weapon_type) {
    std::cout << name << " created" << std::endl;
}

HumanA::~HumanA () {
    std::cout << _name << " is gone" << std::endl;
}

void HumanA::attack () {
    std::cout << _name << " attacks with his ";
    std::cout << _weapon.getType() << std::endl;
}