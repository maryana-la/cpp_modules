#include "Animal.hpp"

Animal::Animal() {
    _type = "kiddy";
    std::cout << "Animal: new kiddy is born" << std::endl;
}

Animal::Animal(const Animal& other) {
    _type = other._type;
    std::cout << "Animal: new kiddy is copied" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal: deleted" << std::endl;
}

Animal& Animal::operator= (const Animal& other) {
    _type = other._type;
    std::cout << "Animal: new kiddy is born via '='" << std::endl;
    return (*this);
}

void Animal::makeSound() const{
    std::cout << "* some unknown sound *" << std::endl;
}

std::string Animal::getType() const {
    return this->_type;
}
