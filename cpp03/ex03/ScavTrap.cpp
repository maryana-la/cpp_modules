#include "ScavTrap.hpp"

ScavTrap::ScavTrap () {
    _name = "noName";
    setParams(100, 50, 20);
    std::cout << YELLOW << "*** ScavTrap Default constructor" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    _name = name;
    setParams(100, 50, 20);
    std::cout << YELLOW << "*** ScavTrap constructor called for " << _name << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    setParams(100, 50, 20);
    std::cout << YELLOW << "*** Scavtrap Copy constructor called for " << this->_name << RESET << std::endl;
}

const ScavTrap ScavTrap::operator= (const ScavTrap& other) {
    this->_name = other._name;
    setParams( other._hit_points, other._energy_points, other._attack_damage);
    std::cout << YELLOW << "*** ScavTrap Operator = overload called" << RESET << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << YELLOW << "*** ScavTrap Destructor: player " << this->_name << " is deleted." << RESET << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << YELLOW << "ScavTrap have enterred in Gate keeper mode." << RESET << std::endl;
}

void ScavTrap::attack(std::string const & target) {
    if (_hit_points > 1) {
        std::cout << YELLOW << _name << " conquers " << target << " and enemies run away" << RESET << std::endl;
        _hit_points -= 2;
    }
    else
        std::cout << YELLOW << "Hero is running away." << RESET << std::endl;
    printParams();
}