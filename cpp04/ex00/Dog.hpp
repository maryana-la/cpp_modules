#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {
protected:
    std::string _type;

public:
    Dog();
    Dog(const Dog& other);
    ~Dog();

    Dog& operator= (const Dog& other);

    virtual std::string getType() const;
    virtual void makeSound() const;
};

#endif //DOG_HPP
