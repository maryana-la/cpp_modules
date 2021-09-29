#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public virtual ClapTrap {
protected:
    ScavTrap();

public:
    /* constructors */
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();
    ScavTrap& operator= (const ScavTrap& other);

    /* functions */
    void attack(std::string const & target);
    void guardGate();
};

#endif //SCAVTRAP_HPP