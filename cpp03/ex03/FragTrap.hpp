#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public virtual ClapTrap {
protected:
    FragTrap();

public:
    /* constructors */
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    ~FragTrap();
    FragTrap& operator= (const FragTrap& other);

    /* functions */
    void highFivesGuys( );
};

#endif //FRAGTRAP_HPP