#include "BaseClass.hpp"

int main () {
    std::srand(std::time(NULL));

    Base *temp;
    temp = generate();
    identify(temp);
    identify(*temp);
    std::cout << "--------------------------" << std::endl;

    Base *two;
    two = generate();
    identify(two);
    identify(*two);
    std::cout << "--------------------------" << std::endl;

    Base *two1;
    two1 = generate();
    identify(two1);
    identify(*two1);
    std::cout << "--------------------------" << std::endl;

    Base *two2;
    two2 = generate();
    identify(two2);
    identify(*two2);

    delete temp;
    delete two;
    delete two1;
    delete two2;
    return 0;
}
