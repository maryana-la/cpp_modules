#include <iostream>
#include <istream>
#include <iomanip>
#include "Contact_class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class Phonebook {
private:
    Contact contact[8];
    int filled;
public:
    Phonebook();
    ~Phonebook();

    void add();
    static void print_header();
    static void print_param(const std::string& line);
    void search();
};

#endif //PHONEBOOK_CLASS_HPP
