#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal {
protected:
    std::string _type;

public:
    WrongCat();
    WrongCat(const WrongCat& other);
    ~WrongCat();

    WrongCat& operator= (const WrongCat& other);

    std::string getType() const;
    void makeSound() const;
};

#endif //WRONGCAT_HPP
