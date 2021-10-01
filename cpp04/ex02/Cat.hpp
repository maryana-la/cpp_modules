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
    Cat(const Cat& other);
    virtual ~Cat();

    Cat& operator= (const Cat& other);

    virtual void makeSound() const;
    void setIdea(const std::string& line);
    std::string getIdea(int i) const;
};

#endif //CAT_HPP
