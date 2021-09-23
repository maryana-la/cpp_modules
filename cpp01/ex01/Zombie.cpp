#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
    std::cout << _name << " is gone" << std::endl;
}

void Zombie::getName(std::string line) {
    this->_name = line;
}

void Zombie::announce (void) {
    std::cout << "< " << _name << " > BraiiiiiiinnnzzzZ..." << std::endl;
}