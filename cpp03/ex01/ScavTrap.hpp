#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap {
private:
    ScavTrap();

public:
    /* constructors */
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();
    const ScavTrap operator= (const ScavTrap& other);

    /* functions */
    void attack(std::string const & target);
    void guardGate();
};

#endif //SCAVTRAP_HPP