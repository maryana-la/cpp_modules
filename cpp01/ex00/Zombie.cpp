#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie() {
    std::cout << _name << " is gone" << std::endl;
}

void Zombie::announce (void) {
    std::cout << "< " << _name << " > BraiiiiiiinnnzzzZ..." << std::endl;
}