#include "Zombie.hpp"

int main () {
    Zombie Coco ("Lolo");
    Coco.announce();

    Zombie *Cucu = newZombie("Cucu");
    Cucu->announce();

    randomChump("Pepe");

    delete Cucu;

    return 0;
}