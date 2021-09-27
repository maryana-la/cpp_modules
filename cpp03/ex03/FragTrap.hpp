#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap {
private:
    FragTrap();

public:
    /* constructors */
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    ~FragTrap();
    const FragTrap operator= (const FragTrap& other);

    /* functions */
    void highFivesGuys(void);
};

#endif //FRAGTRAP_HPP