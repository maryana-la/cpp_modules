#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

//output:
//    $> clang++ -W -Wall -Werror *.cpp
//    $> ./a.out | cat -e
//    * shoots an ice bolt at bob *$
//    * heals bob's wounds *$


int main()
{
    {
        std::cout << "-----------------TEST_FROM_SUBJECT---------------------" << std::endl;
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter *me = new Character("me");
        AMateria *tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter *bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    {
        std::cout << "-----------------MY TEST---------------------" << std::endl;
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Ice());
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        src->learnMateria(new Cure());
        src->learnMateria(new Cure());
        ICharacter *me = new Character("me");
        AMateria *tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("ice");
        me->equip(tmp);
		me->use(1, *me);
        me->unequip(1);
        delete tmp;
        tmp = src->createMateria("cure");
        me->equip(tmp);
		tmp = src->createMateria("non_exist");
		me->equip(tmp);
        ICharacter *bob = new Character("bob");
        *bob = *me;
        *bob = *me;
        *bob = *me;
        *bob = *me;
        me->use(0, *bob);
        me->use(1, *bob);
		me->use(2, *bob);
		me->use(1, *me);
		me->unequip(4);
        delete bob;
        delete me;
        delete src;
    }
}
