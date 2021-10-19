#ifndef INTERN_HPP
#define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
    Form * makeShrubbery (const std::string target);
    Form * makeRobotomy (const std::string target);
    Form * makePresidential (const std::string target);
    typedef Form * (Intern:: * funcPTR)(const std::string target);
    funcPTR _forms[3];
public:
    Intern ();
    ~Intern ();

    Form *makeForm (const std::string nameForm, const std::string target);
};
#endif //INTERN_HPP
