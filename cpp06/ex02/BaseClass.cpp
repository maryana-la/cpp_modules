#include "BaseClass.hpp"

Base * generate(void) {
    int num = std::rand() % 3;
    if (num == 1)
        return (new A);
    else if (num == 2)
        return (new B);
    else
        return (new C);
}

void identify(Base* p) {
    if (p == NULL)
        return ;
    try {
        A * a = dynamic_cast <A *> (p);
        if (a != NULL)
            std::cout << "* A class identified" << std::endl;
    }
    catch (std::exception &e) {}

    try {
        B * b = dynamic_cast <B *> (p);
        if (b != NULL)
            std::cout << "* B class identified" << std::endl;
    }
    catch (std::exception &e) {}

    try {
        C * c = dynamic_cast <C *> (p);
        if (c != NULL)
            std::cout << "* C class identified" << std::endl;
    }
    catch (std::exception &e) {}

    catch (...) {
        std::cout << "Some exception is caught" << std::endl;
    }
}


void identify(Base& p) {
    try {
        A & a = dynamic_cast <A &> (p);
        (void) a;
        std::cout << "& A class identified" << std::endl;
    }
    catch (std::exception &e) {}

    try {
        B & b = dynamic_cast <B &> (p);
        (void) b;
        std::cout << "& B class identified" << std::endl;
    }
    catch (std::exception &e) {}

    try {
        C & c = dynamic_cast <C &> (p);
        (void) c;
        std::cout << "& C class identified" << std::endl;
    }
    catch (std::exception &e) {}

    catch (...) {
        std::cout << "Some exception is caught" << std::endl;
    }
}
