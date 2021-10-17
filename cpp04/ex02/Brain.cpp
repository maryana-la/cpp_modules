#include "Brain.hpp"
#include "Colors.hpp"

Brain::Brain() {
    std::cout << YELLOW << "Brain created" << RESET << std:: endl;
    _ideas[0] = "My zero idea";
}

Brain::Brain(const Brain &other) {
    std::cout << YELLOW << "Brain created via copy constructor" << RESET << std:: endl;
    (*this) = other;
}

Brain::~Brain() {
    std::cout << YELLOW << "Brain deleted" << RESET << std:: endl;
}

Brain& Brain::operator= (const Brain& other) {
    for (int i = 0; i < NUM_IDEAS; i++)
        this->_ideas[i] = other.getIdeas(i);
    return (*this);
}

std::string Brain::getIdeas(int i) const {
    if (i >= NUM_IDEAS || i < 0)
        std::cout << YELLOW << "No such idea" << RESET << std::endl;
    else
        return (this->_ideas[i]);
    return ("No such idea");
}

void Brain::setIdea(const std::string& line) {
    int i;
    for (i = 0; !_ideas[i].empty() && i < NUM_IDEAS; i++);
    _ideas[i] = line;
}
