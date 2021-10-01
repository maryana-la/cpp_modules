#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
//    {
//        std::cout << BOLDRED << "Just create and delete correctly" << RESET << std::endl;
//        std::cout << BOLDRED << "--------------------------------" << RESET << std::endl;
//        const Animal* j = new Dog();
//        const Animal* i = new Cat();
//
//        Animal norm;
//        delete j;//should not create a leak
//        delete i;
//    }

    {
        std::cout << std::endl;
        std::cout << BOLDRED << "Check deep copy" << RESET << std::endl;
        std::cout << BOLDRED << "--------------------------------" << RESET << std::endl;

        Cat barsik;
        Cat mursik(barsik);
        mursik.setIdea("lulu_mursik");
        std::cout << mursik.getIdea(1) << std::endl;
        barsik.setIdea("lulu_barsik");
        std::cout << barsik.getIdea(1) << std::endl;
        barsik.makeSound();
    }

    {
        std::cout << std::endl;
        std::cout << BOLDRED << "Check deep copy2 - DOGS" << RESET << std::endl;
        std::cout << BOLDRED << "--------------------------------" << RESET << std::endl;

        Dog barsik;
        Dog mursik;
        mursik = barsik;
        mursik.setIdea("lulu_mursik");
        std::cout << mursik.getIdea(1) << std::endl;
        barsik.setIdea("lulu_barsik");
        std::cout << barsik.getIdea(1) << std::endl;
        barsik.makeSound();
    }

    {
        std::cout << std::endl;
        std::cout << BOLDRED << "Check mozgi" << RESET << std::endl;
        std::cout << BOLDRED << "--------------------------------" << RESET << std::endl;

        Cat *barsik = new Cat();
        barsik->setIdea("whoooo");
        std::cout << barsik->getIdea(0) << std::endl;
        std::cout << barsik->getIdea(1) << std::endl;

        delete barsik;//should not create a leak
    }
//    {
//        std::cout << std::endl;
//        std::cout << BOLDRED << "Check array (from subject" << RESET << std::endl;
//        std::cout << BOLDRED << "--------------------------------" << RESET << std::endl;
//
//        Animal *tribe[10];
//        for (int i = 0; i < 10; i++) {
//            if (i < 5)
//                tribe[i] = new Cat();
//            else
//                tribe[i] = new Dog();
//            tribe[i]->makeSound();
//        }
//
//        for (int i = 0; i < 10; i++)
//            delete tribe[i];
//    }
}