#include "Phonebook_class.hpp"
#include <cstdlib>

Phonebook::Phonebook() {
    this->filled = 0;
}

Phonebook::~Phonebook() {
    std::cout << "Your work is done! Contacts deleted." << std::endl;
}

void Phonebook::add() {
    int i;

    if (this->filled < 8)
        i = this->filled;
    else
        i = this->filled % 8;

    contact[i].get_info();
    this->contact[i].index = i + 1;
    this->filled++;
}

void Phonebook::print_header() {
    std::cout << std::setw(10) << "INDEX";
    std::cout << "|";
    std::cout << std::setw(10) << "FIRST NAME";
    std::cout << "|";
    std::cout << std::setw(10) << "LAST NAME";
    std::cout << "|";
    std::cout << std::setw(10) << "NICKNAME" << std::endl;
}

void Phonebook::print_param(const std::string& param) {
    std::cout << "|";
    if (param.length() > 10)
        std::cout << param.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << param;
}

void Phonebook::search() {
    //print all table
    char tmp[255];
    int index;

    this->print_header();
    int i;
    for (i = 0; !this->contact[i].first_name.empty() && i < 8; i++) {
        std::cout << std::setw(10) << this->contact[i].index;
        print_param(this->contact[i].first_name);
        print_param(this->contact[i].last_name);
        print_param(this->contact[i].nickname);
        std::cout << std::endl;
    }

    if (i == 0) {
        std::cout << std::endl << "NO CONTACTS. PLEASE ENTER DATA" << std::endl;
        return ;
    }

    std::cout << std::endl<< "Please enter index form 1 till " << i << " : ";
    std::cin >> tmp;
    index = (int)strtol(tmp, NULL, 10);
    if (index > 0 && index <= i) {
        std::cout << "First name: " << this->contact[index - 1].first_name << std::endl;
        std::cout << "Last name: " << this->contact[index - 1].last_name << std::endl;
        std::cout << "Nickname: " << this->contact[index - 1].nickname << std::endl;
        std::cout << "Phone number: " << this->contact[index - 1].phone_number << std::endl;
        std::cout << "Darkest secret: " << this->contact[index - 1].darkest_secret << std::endl;
    }
    else
        std::cout << "Invalid input" << std::endl;
}