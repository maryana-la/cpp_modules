#include <iostream>
#include <istream>
#include <iomanip>
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

class Contact {
public:
    int index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    Contact ();
    ~Contact ();
    void get_info ();
    std::string read_lines(const std::string& name);
};

#endif
