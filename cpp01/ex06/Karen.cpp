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

void Karen::complain( std::string level) {
    std::string check[] = {"debug", "info", "warning", "error"};

    int i;
    for (i = 0; i < 4; i++)
    {
        if (check[i] == level) {
            switch (i) {
                case 0:
                    std::cout << "[ DEBUG ]" << std:: endl;
                    (this->*message[0])();
                    std::cout << std::endl;
                case 1:
                    std::cout << "[ INFO ]" << std::endl;
                    (this->*message[1])();
                    std::cout << std::endl;
                case 2:
                    std::cout << "[ WARNING ]" << std::endl;
                    (this->*message[2])();
                    std::cout << std::endl;
                case 3:
                    std::cout << "[ ERROR ]" << std::endl;
                    (this->*message[3])();
                    std::cout << std::endl;
                default:
                    break;
            }
            break;
        }
    }
    if (i == 4)
        std::cout << "[ Nothing to say ]" << std::endl;
}