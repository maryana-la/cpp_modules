#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string tar)
: Form("PresidentialPardon", 25, 5), _target(tar) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
: Form(other), _target(other._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget () const {
    return (this->_target);
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    if (this == &other)
        return (*this);
    Form::operator=(other);
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    Form::checkExecRights(executor);
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox!" << std::endl;
}
