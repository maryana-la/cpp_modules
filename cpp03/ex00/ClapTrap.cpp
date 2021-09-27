#include "ClapTrap.hpp"
#include <iomanip>

ClapTrap::ClapTrap() {
    _name = "noName";
    setParams(10, 10, 0);
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    setParams(10, 10, 0);
    std::cout << "Constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    this->_name = other._name;
    setParams(10, 10, 0);

    std::cout << "Copy constructor called for " << this->_name << std::endl;
}

const ClapTrap& ClapTrap::operator= (const ClapTrap& other) {
    this->_name = other._name;
    setParams(other._hit_points, other._energy_points, other._attack_damage);
    std::cout << "Operator = overload called for " << this->_name << std::endl;
    return (*this);
}

void ClapTrap::setParams (unsigned int hit, unsigned int energy, unsigned int attack) {
    _hit_points = hit;
    _energy_points = energy;
    _attack_damage = attack;
}

unsigned int ClapTrap::getHitPoints () {
    return _hit_points;
}

unsigned int ClapTrap::getEnergyPoints () {
    return _energy_points;
}

unsigned int ClapTrap::getAttackDamage () {
    return _attack_damage;
}

void ClapTrap::printParams() {
    std::cout << std::setw(20) << this->_name << "  ***  ";
    std::cout << std::setw(20) << "hit points: " << _hit_points;
    std::cout << std::setw(20) << "energy points: " << _energy_points;
    std::cout << std::setw(20) << "attack damage: " << _attack_damage << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor: player " << this->_name << " is deleted." << std::endl;
}

void ClapTrap::attack(std::string const &target) {
    if (_hit_points > 0) {
        std::cout << _name << " attacks " << target << " causing 2 damage" << std::endl;
        _hit_points--;
    }
    else
        std::cout << "Cannot attack. Low hit points" << std::endl;
    printParams();
}

void ClapTrap::takeDamage(unsigned int amount) {
    if ( _energy_points < (_attack_damage + amount))
        std::cout << _name << " too much damage, needs repairing" << std::endl;
    else {
        std::cout << _name << " takes damage " << amount << " points" << std::endl;
        _attack_damage += amount;
        _energy_points--;
    }
    printParams();
}

void ClapTrap::beRepaired(unsigned int amount) {
    setParams(amount, 10, 0);
    std::cout << _name << " was repaired " << std::endl;
    printParams();
}