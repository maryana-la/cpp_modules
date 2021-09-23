#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        Weapon        club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon        club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}


//
//int main () {
//    Weapon gun("candy");
//    Weapon gun2("lollipop");
//    HumanA person1("Coco", gun);
//    HumanB person2("Lolo");
//
//    person1.attack();
//    person2.attack();
//
//    gun.setType("choco");
//    person2.setWeapon(gun2);
//    person1.attack();
//    person2.attack();
//}