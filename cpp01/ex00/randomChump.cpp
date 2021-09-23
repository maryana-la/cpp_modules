#include "Zombie.hpp"

void randomChump( std::string name ) {
    Zombie random_chump = Zombie (name);
    random_chump.announce();
}