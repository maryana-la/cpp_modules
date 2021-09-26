#include "Karen.hpp"

int main (int argc, char *argv[])
{
    if (argc != 2) {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }

    Karen tetenka;
    std::string level(argv[1]);
    tetenka.complain(level);
    return 0;
}
