#include "RobotomyRequestForm.hpp"
#define BLUE    "\033[34m"      /* Blue */
#define YELLOW  "\033[33m"      /* Yellow */
#define RESET   "\033[0m"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string tar)
: Form("robotomy", 72, 45), _target(tar) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: Form(other), _target(other._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget () const {
    return (this->_target);
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this == &other)
        return (*this);
    Form::operator=(other);
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    Form::checkExecRights(executor);
    std::cout << "Brrrrrrr.......Trrrrrrr......Drrrrrrrr......" << std::endl;
    std::srand(std::time(NULL));
    if(std::rand() % 2)
        std::cout << BLUE << this->getTarget() << " has been robotomized!" << RESET << std::endl;
    else
        std::cout << YELLOW << "The robotization failed for " << this->getTarget() << RESET << std::endl;
}
