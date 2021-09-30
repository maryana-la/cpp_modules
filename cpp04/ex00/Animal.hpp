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

    virtual std::string getType() const;
    virtual void makeSound() const;
};

#endif //ANIMAL_HPP
