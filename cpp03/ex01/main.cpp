#include "ScavTrap.hpp"

int main () {

    ClapTrap coco("Coco");
    ScavTrap tmp("lulu");
    ScavTrap lulu(tmp);

    lulu.printParams();
    coco.printParams();

    lulu.attack("fortress");
    coco.attack("NLO");

    lulu.takeDamage(3);
    coco.takeDamage(15);

    lulu.beRepaired(90);
    coco.beRepaired(3);

    lulu.guardGate();
}