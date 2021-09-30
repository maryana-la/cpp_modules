#include "DiamondTrap.hpp"

int main () {

    {
        ClapTrap coco("Coco");
        coco.printParams();
        coco.attack("NLO");
        coco.takeDamage(15);
        coco.beRepaired(3);
    }
    std::cout << "-------------------------------------------" << std::endl;
    {
        ScavTrap tmp("lulu");
        ScavTrap lulu(tmp);
        lulu.printParams();
        lulu.attack("fortress");
        lulu.takeDamage(3);
        lulu.beRepaired(90);
        lulu.guardGate();
    }
    std::cout << "-------------------------------------------" << std::endl;
    {
        FragTrap pepe("Pepe_frag");
        pepe.printParams();
        pepe.attack("fortress");
        pepe.takeDamage(3);
        pepe.beRepaired(-1);
        pepe.highFivesGuys();
    }
    std::cout << "-------------------------------------------" << std::endl;
    {
        DiamondTrap fufu("diamond");
        DiamondTrap xexe(fufu);
        fufu.printParams();
        fufu.attack("koko");
        fufu.takeDamage(20);
        fufu.beRepaired(45);
        fufu.highFivesGuys();
        fufu.guardGate();
        fufu.whoAmI();
    }
}