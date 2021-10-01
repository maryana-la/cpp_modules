#include "Cat.hpp"

Cat::Cat() : Animal(){
    _type = "Cat";
    _mozgi = new Brain();
    std::cout << BLUE << "Cat: new kitten is born" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
    this->_type = other._type;
    this->_mozgi = new Brain;
    *(this->_mozgi) = *(other._mozgi);
    std::cout << BLUE << "Cat: new kitten is copied" << RESET << std::endl;
}

Cat::~Cat() {
    std::cout << BLUE << "Cat: deleted" << RESET << std::endl;
    delete _mozgi;
}

Cat& Cat::operator= (const Cat& other) {
    if (this == &other)
        return (*this);
    _type = other._type;
    delete this->_mozgi;
    this->_mozgi = new Brain();
    *(this->_mozgi) = *(other._mozgi);
    std::cout << BLUE << "Cat: new kitten is born via '='" << RESET << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << BLUE << "Meow-meow" << RESET << std::endl;
}

void Cat::setIdea(const std::string& line) {
    _mozgi->setIdea(line);
}

std::string Cat::getIdea(int i) const {
    return (_mozgi->getIdeas(i));
}