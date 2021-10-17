#include "Animal.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
public:
    Cat();
    Cat(const Cat& other);
    ~Cat();

    Cat& operator= (const Cat& other);

    virtual std::string getType() const;
    virtual void makeSound() const;
};

#endif //CAT_HPP
