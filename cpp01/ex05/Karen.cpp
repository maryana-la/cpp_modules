#include "Karen.hpp"

Karen::Karen() {
    std::cout << "Karen is born." << std::endl;
    this->message[0] = &Karen::debug;
    this->message[1] = &Karen::info;
    this->message[2] = &Karen::warning;
    this->message[3] = &Karen::error;
}

Karen::~Karen() {
    std::cout << "Finally Karen is gone." << std::endl;
}

void Karen::debug() {
    std::cout << "debug" << std::endl;
}

void  Karen::info() {
    std::cout << "info" << std::endl;
}

void Karen::warning() {
    std::cout << "warning" << std::endl;
}

void Karen::error() {
    std::cout << "error" << std::endl;
}

void Karen::complain(std::string level) {
    std::string check[] = {"debug", "info", "warning", "error"};
    int i;
    for (i = 0; i < 4; i++) {
        if (check[i] == level) {
            (this->*message[i])();
            break;
        }
    }
    if (i == 4)
        std::cout << "nothing to say" << std::endl;
}