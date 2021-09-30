#include <iostream>

#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain {
protected:
    std::string idea[100];
public:
    Brain();
    Brain(const Brain& other);
    ~Brain();

    Brain& Brain::operator= (const Brain& other)
};

#endif //BRAIN_HPP