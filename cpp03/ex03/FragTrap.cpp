#include "FragTrap.hpp"

FragTrap::FragTrap () {
    _name = "noName";
    setParams(100, 100, 30);
    std::cout << BLUE << "^^^ FragTrap Default constructor is called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _name = name;
    setParams(100, 100, 30);
    std::cout << BLUE << "^^^ FragTrap constructor called for " << _name << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
    setParams(100, 100, 30);
    std::cout << BLUE << "^^^ FragTrap Copy constructor called for " << this->_name << RESET << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& other) {
    this->_name = other._name;
    setParams( other._hit_points, other._energy_points, other._attack_damage);
    std::cout << BLUE << "^^^ FragTrap Operator = overload called" << RESET << std::endl;
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << BLUE << "^^^ FragTrap Destructor: player " << this->_name << " is deleted." << RESET << std::endl;
}

void FragTrap::highFivesGuys( ) {
    std::cout << BOLDBLUE << "Hi guys! Feels like it's gonna be a great game! Cheers!" << RESET << std::endl;
}