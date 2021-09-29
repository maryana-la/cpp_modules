#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
    _name = "noName_Diamond";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
    this->_name = name;
    ClapTrap::_name = name + "_clap_name";
    std::cout << "ClapTrap name set" << std::endl;
    this->_hit_points = FragTrap(name).getHitPoints();
    this->_energy_points = ScavTrap(name).getEnergyPoints();
    this->_attack_damage = FragTrap(name).getAttackDamage();
    std::cout << BOLDMAGENTA << "Diamond constructor. " << this->_name << " Inherited from ScavTrap & FragTrap" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {
    setParams(100, 50, 30);
    std::cout << BOLDMAGENTA << "*** DiamondTrap Copy constructor called for " << this->_name << RESET << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << BOLDMAGENTA << "DiamondTrap Destructor: player " << this->_name << " is deleted." << RESET << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& other) {
    this->_name = other._name;
    setParams( other._hit_points, other._energy_points, other._attack_damage);
    std::cout << BOLDMAGENTA << "DiamondTrap Operator = overload called" << RESET << std::endl;
    return (*this);
}

void DiamondTrap::whoAmI() {
    std::cout << BOLDMAGENTA << "WHO AM I?" << std::endl;
    std::cout << "DiamondTrap name: " << this->_name << std::endl;
    std::cout << "ClapTrap    name: " << ClapTrap::getName() << RESET << std::endl;
}