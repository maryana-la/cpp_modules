#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    std::cout << BLUE << "Cat: new kitten is born" << RESET << std::endl;
    _mozgi = new Brain();
}

Cat::Cat(Brain *mozgi) {
    _type = "Cat";
    std::cout << BLUE << "Cat: new kitten is born with mozgi" << RESET << std::endl;
    _mozgi = mozgi;
}

Cat::Cat(const Cat& other) {
    _type = other._type;
    _mozgi = other._mozgi;
    std::cout << BLUE << "Cat: new kitten is copied" << RESET << std::endl;
}

Cat::~Cat() {
    std::cout << BLUE << "Cat: deleted" << RESET << std::endl;
    delete _mozgi;
}

Cat& Cat::operator= (const Cat& other) {
    _type = other._type;
    _mozgi = other._mozgi;
    std::cout << BLUE << "Cat: new kitten is born via '='" << RESET << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << BLUE << "Meow-meow" << RESET << std::endl;
}
std::string Cat::getType() const {
    return this->_type;
}
