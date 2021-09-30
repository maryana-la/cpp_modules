#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
private:
    Brain* _mozgi;

protected:
    std::string _type;

public:
    Cat();
    Cat(Brain *mozgi);
    Cat(const Cat& other);
    ~Cat();

    Cat& operator= (const Cat& other);

    virtual std::string getType() const;
    virtual void makeSound() const;
};

#endif //CAT_HPP
