#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat& other);
    ~WrongCat();

    WrongCat& operator= (const WrongCat& other);

    std::string getType() const;
    void makeSound() const;
};

#endif //WRONGCAT_HPP
