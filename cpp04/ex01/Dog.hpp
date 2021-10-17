#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {
private:
    Brain* _mozgi;
public:
    Dog();
    Dog(const Dog& other);
    virtual ~Dog();

    Dog& operator= (const Dog& other);

    virtual void makeSound() const;
    void setIdea(const std::string& line);
    std::string getIdea(int i) const;
};

#endif //DOG_HPP
