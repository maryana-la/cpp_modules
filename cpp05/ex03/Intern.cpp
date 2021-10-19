#include "Intern.hpp"

Intern::Intern() {
    this->_forms[0] = &Intern::makeShrubbery;
    this->_forms[1] = &Intern::makeRobotomy;
    this->_forms[2] = &Intern::makePresidential;
}

Intern::~Intern() {
}

Form * Intern::makeShrubbery (const std::string target){
    return (new ShrubberyCreationForm(target));
}

Form * Intern::makeRobotomy (const std::string target) {
    return (new RobotomyRequestForm (target));
}

Form * Intern::makePresidential (const std::string target) {
    return (new PresidentialPardonForm (target));
}

Form * Intern::makeForm (const std::string nameForm, const std::string target) {
    std::string check[] = {"shrubbery request", "robotomy request", "presidential request"};

    for (int i = 0; i < 3; i++) {
        if (nameForm == check[i]) {
            std::cout << "Intern creates " << nameForm << std::endl;
            return (this->*_forms[i])(target);
        }
    }
    std::cout << "The requested form is not found. Try again" << std::endl;
    return nullptr;
}
//todo sega if non-exist