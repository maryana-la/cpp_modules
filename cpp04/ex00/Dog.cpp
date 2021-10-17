#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    std::cout << MAGENTA << "Dog: new puppy is born" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << MAGENTA << "Dog: new puppy is copied" << RESET  << std::endl;
}

Dog::~Dog() {
    std::cout << MAGENTA << "Dog: deleted" << RESET  << std::endl;
}

Dog& Dog::operator= (const Dog& other) {
    _type = other._type;
    std::cout << MAGENTA << "Dog: new puppy is born via '='" << RESET  << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << MAGENTA << "Gav-gav" << RESET  << std::endl;
}

std::string Dog::getType() const {
    return this->_type;
}