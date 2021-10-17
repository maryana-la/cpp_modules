#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << CYAN << "WrongCat: new kitten is born" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << CYAN << "WrongCat: new kitten is copied" << RESET << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << CYAN << "WrongCat: deleted" << RESET << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& other) {
    _type = other._type;
    std::cout << CYAN << "WrongCat: new kitten is born via '='" << RESET << std::endl;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << CYAN << "Meow-meow" << RESET << std::endl;
}
std::string WrongCat::getType() const {
    return this->_type;
}
