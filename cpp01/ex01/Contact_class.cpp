#include "Contact_class.hpp"

Contact::Contact() {
    this->index = 0;
}

Contact::~Contact () {
};

std::string Contact::read_lines(const std::string& name) {
    std::string buff;

    std::cout << name;
    std::cin >> buff;
    return (buff);
}

void Contact::get_info() {
    std::string buff;

    first_name = read_lines("First name: ");
    last_name = read_lines("Last name: ");
    nickname = read_lines("Nickname: ");
    phone_number = read_lines("Phone number: ");
    darkest_secret = read_lines("Darkest secret: ");
}
