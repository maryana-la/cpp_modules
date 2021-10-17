#include "Dog.hpp"

Dog::Dog() : Animal () {
    _type = "Dog";
    _mozgi = new Brain();
    std::cout << MAGENTA << "Dog: new puppy is born" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    _type = other._type;
    this->_mozgi = new Brain;
    *(this->_mozgi) = *(other._mozgi);
    std::cout << MAGENTA << "Dog: new puppy is copied" << RESET  << std::endl;
}

Dog::~Dog() {
    std::cout << MAGENTA << "Dog: deleted" << RESET  << std::endl;
    delete _mozgi;
}

Dog& Dog::operator= (const Dog& other) {
    if (this == &other)
        return (*this);
    _type = other._type;
    delete this->_mozgi;
    this->_mozgi = new Brain();
    *(this->_mozgi) = *(other._mozgi);
    std::cout << MAGENTA << "Dog: new puppy is born via '='" << RESET  << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << MAGENTA << "Gav-gav" << RESET  << std::endl;
}

void Dog::setIdea(const std::string& line) {
    _mozgi->setIdea(line);
}

std::string Dog::getIdea(int i) const {
    return (_mozgi->getIdeas(i));
}
