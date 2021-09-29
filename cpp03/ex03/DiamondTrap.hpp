#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string _name;
	DiamondTrap();
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap & other);
    ~DiamondTrap();

    DiamondTrap& operator= (const DiamondTrap& other);

    void whoAmI();
};

#endif //DIAMONDTRAP_HPP