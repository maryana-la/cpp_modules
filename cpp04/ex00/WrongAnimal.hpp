#include <iostream>
#include <istream>
#include "Colors.hpp"

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal {
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    ~WrongAnimal();

    WrongAnimal& operator= (const WrongAnimal& other);

    std::string getType() const;
    void makeSound() const;
};

#endif //WRONGANIMAL_HPP
