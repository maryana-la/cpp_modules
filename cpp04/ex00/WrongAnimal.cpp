#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    _type = "weirdy";
    std::cout << "WrongAnimal: new weirdy is born" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    _type = other._type;
    std::cout << "WrongAnimal: new weirdy is copied" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal: deleted" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& other) {
    _type = other._type;
    std::cout << "WrongAnimal: new weirdy is born via '='" << std::endl;
    return (*this);
}

void WrongAnimal::makeSound() const{
    std::cout << "* some unknown sound *" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->_type;
}