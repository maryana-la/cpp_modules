#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap {
private:
    std::string _name;
    unsigned int _hit_points;
    unsigned int _energy_points;
    unsigned int _attack_damage;
    ClapTrap();

public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ~ClapTrap();
    const ClapTrap& operator= (const ClapTrap& other);

    void setParams(unsigned int hit, unsigned int energy, unsigned int attack);
    unsigned int getHitPoints ();
    unsigned int getEnergyPoints ();
    unsigned int getAttackDamage ();
    void printParams();

    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif //CLAPTRAP_HPP
