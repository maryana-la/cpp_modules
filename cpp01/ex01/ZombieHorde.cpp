#include "Zombie.hpp"
#include <sstream>

Zombie* zombieHorde( int N, std::string name ) {

    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; i++) {
		std:: string num;
		std::ostringstream temp;
		temp << i;
		num = temp.str();
		horde[i].getName(name + "_" + num);
	}

    return horde;
}