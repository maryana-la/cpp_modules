#include "ClapTrap.hpp"
#include <iomanip>

ClapTrap::ClapTrap() : _hit_points(10), _energy_points(10), _attack_damage(0) {
    _name = "noName";
    std::cout << GREEN << "### ClapTrap Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hit_points(10), _energy_points(10), _attack_damage(0) {
    this->_name = name;
    std::cout << GREEN << "### ClapTrap Constructor called for " << _name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _hit_points(10), _energy_points(10), _attack_damage(0) {
    this->_name = other._name;
    std::cout << GREEN << "### ClapTrap Copy constructor called for " << this->_name << RESET << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other) {
    this->_name = other._name;
    setParams(other._hit_points, other._energy_points, other._attack_damage);
    std::cout << GREEN << "### ClapTrap Operator = overload called for " << this->_name << RESET << std::endl;
    return (*this);
}

void ClapTrap::setParams (unsigned int hit, unsigned int energy, unsigned int attack) {
    _hit_points = hit;
    _energy_points = energy;
    _attack_damage = attack;
}

unsigned int ClapTrap::getHitPoints () const{
    return _hit_points;
}

unsigned int ClapTrap::getEnergyPoints () const{
    return _energy_points;
}

unsigned int ClapTrap::getAttackDamage () const{
    return _attack_damage;
}

std::string ClapTrap::getName () {
    return (_name);
}

void ClapTrap::printParams() {
    std::cout << GREEN << std::setw(20) << this->_name << "  ***  ";
    std::cout << GREEN << std::setw(20) << "hit points: " << _hit_points;
    std::cout << GREEN << std::setw(20) << "energy points: " << _energy_points;
    std::cout << GREEN << std::setw(20) << "attack damage: " << _attack_damage << RESET << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << GREEN << "### ClapTrap Destructor: player " << this->_name << " is deleted." << RESET << std::endl;
}

void ClapTrap::attack(std::string const &target) {
    if (_hit_points > 0) {
        std::cout << GREEN << _name << " attacks " << target << " causing 2 damage" << RESET << std::endl;
        _hit_points--;
    }
    else
        std::cout << GREEN << "### Cannot attack. Low hit points" << RESET << std::endl;
    printParams();
}

void ClapTrap::takeDamage(unsigned int amount) {
    if ( _energy_points < (_attack_damage + amount))
        std::cout << GREEN << _name << " too much damage, needs repairing" << RESET << std::endl;
    else {
        std::cout << GREEN << _name << " takes damage " << amount << " points" << RESET << std::endl;
        _attack_damage += amount;
        _energy_points--;
    }
    printParams();
}

void ClapTrap::beRepaired(unsigned int amount) { //todo check negative
    setParams(amount, 10, 0);
    std::cout << GREEN << _name << " was repaired " << RESET << std::endl;
    printParams();
}