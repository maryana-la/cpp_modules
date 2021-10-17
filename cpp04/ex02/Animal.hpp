#include <iostream>
#include <istream>
#include "Colors.hpp"

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
protected:
    std::string _type;
public:
    Animal();
    Animal(const Animal& other);
    virtual ~Animal();

    Animal& operator= (const Animal& other);
    std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif //ANIMAL_HPP
