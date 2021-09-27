#include "ClapTrap.hpp"

int main () {

    ClapTrap coco("Coco");
    ClapTrap tmp("lulu");
    ClapTrap lulu(tmp);

    lulu.printParams();
    coco.printParams();

    lulu.attack("enemy");
    coco.attack("NLO");

    lulu.takeDamage(3);
    coco.takeDamage(15);

    lulu.beRepaired(12);
    coco.beRepaired(3);
}