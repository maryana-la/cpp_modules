#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
    {
        std::cout << BOLDRED << "MAIN FROM SUBJECT" << RESET << std::endl;

        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        std::cout << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        std::cout << std::endl;

        delete meta;
        delete j;
        delete i;
    }

    {
        std::cout << std::endl;
        std::cout << BOLDRED << "WRONG ANIMALS" << RESET << std::endl;

        const WrongAnimal *wr_cat = new WrongCat();
        const WrongAnimal *pushok = new WrongAnimal();
        WrongAnimal ruzhik;
        WrongAnimal barsik(ruzhik);
        WrongCat snezhok;
        std::cout << "1 " << wr_cat->getType() << std::endl;
        std::cout << "2 " << pushok->getType() << std::endl;
        std::cout << "3 " << ruzhik.getType() << std::endl;
        std::cout << "4 " << barsik.getType() << std::endl;
        std::cout << "4 " << snezhok.getType() << std::endl;
        std::cout << std::endl;
        std::cout << wr_cat->getType() << std::endl;
        wr_cat->makeSound();
        pushok->makeSound();
        ruzhik.makeSound();
        barsik.makeSound();
        snezhok.makeSound();
        std::cout << std::endl;
        delete wr_cat;
        delete pushok;
    }
    return(0);

//    {
//        const Animal *meta = new Animal();
//        const Animal *j = new Dog();
//        const Animal *i = new Cat();
//        std::cout << j->getType() << " " << std::endl;
//        std::cout << i->getType() << " " << std::endl;
//        i->makeSound(); //will output the cat sound!
//        j->makeSound();
//        meta->makeSound();
//    }
//    {
//        const WrongAnimal *meta = new WrongAnimal();
//        const WrongAnimal *i = new Cat();
//        std::cout << i->getType() << " " << std::endl;
//        std::cout << meta->getType() << " " << std::endl;
//        i->makeSound(); //will output the cat sound!
//        meta->makeSound();
//    }
}