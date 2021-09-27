#include "FragTrap.hpp"

int main () {

    ClapTrap coco("Coco");
    FragTrap pepe("Pepe_frag");

    pepe.printParams();
    coco.printParams();

    pepe.attack("fortress");
    coco.attack("NLO");

    pepe.takeDamage(3);
    coco.takeDamage(15);

    pepe.beRepaired(-1);
    coco.beRepaired(3);

    pepe.highFivesGuys();
}