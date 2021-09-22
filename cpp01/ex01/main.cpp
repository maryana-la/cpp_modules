#include "Phonebook_class.hpp"

int main ()
{
    std::string buff;
    Phonebook   phone;

    std::cout << "WELCOME TO PHONEBOOK" << std::endl;
    while (true) {
        std::cout << std::endl << "*** Please enter command: ADD, SEARCH, EXIT ***" << std::endl;
        std::cout << "Your request: ";
        std::cin >> buff;
        if (std::cin.eof())
            break ;
        if (buff == "ADD")
            phone.add();
        else if (buff == "SEARCH")
            phone.search();
        else if (buff == "EXIT")
            break ;
        else
            std::cout << "Command is incorrect. Please try again." << std::endl;
    }
    return (0);
}