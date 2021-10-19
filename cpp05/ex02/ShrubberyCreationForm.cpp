#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string tar)
: Form("shrubbery", 145, 137), _target(tar) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
: Form(other), _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget () const {
    return (this->_target);
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this == &other)
        return (*this);
    Form::operator=(other);
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    this->checkExecRights(executor);
    std::string fileName;
    fileName = this->_target + "_shrubbery";
    std::ofstream fileOut(fileName, std::ios::trunc);

    if (fileOut.is_open()) {
        std::srand(std::time(nullptr));
        if(std::rand() % 2) {
            fileOut << "         # #### ####" << std::endl;
            fileOut << "      ### \\/#|### |/####" << std::endl;
            fileOut << "     ##\\/#/ \\||/##/_/##/_#" << std::endl;
            fileOut << "   ###  \\/###|/ \\/ # ###" << std::endl;
            fileOut << " ##_\\_#\\_\\## | #/###_/_####" << std::endl;
            fileOut << "## #### # \\ #| /  #### ##/##" << std::endl;
            fileOut << "__#_--###`  |{,###---###-~" << std::endl;
            fileOut << "           \\ }{}}{" << std::endl;
            fileOut << "              }}{" << std::endl;
            fileOut << "         ejm  {{}" << std::endl;
            fileOut << "        , -=-~{ .-^- _" << std::endl;
            fileOut << "             `}" << std::endl;
            fileOut << "              {" << std::endl;
        }
        else {
            fileOut << "             ,@@@@@@@," << std::endl;
            fileOut << "     ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
            fileOut << "  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
            fileOut << " ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
            fileOut << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
            fileOut << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
            fileOut << " `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
            fileOut << "     |o|        | |         | |" << std::endl;
            fileOut << "     |.|        | |         | |" << std::endl;
            fileOut << "  \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
        }
        fileOut.close();
    }
    else
        std::cout << "Oops, cannot create file for writing. Try again" << std::endl;
}
