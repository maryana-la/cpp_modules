#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException (_name, _grade);
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException (_name, _grade);
    std::cout << "Bureaucrat " << _name << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other._name), _grade(other._grade) {
    if (other.getGrade() < 1)
        throw Bureaucrat::GradeTooHighException (_name, _grade);
    if (other.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException (_name, _grade);
    std::cout << "Bureaucrat " << this->_name << " copied" << std::endl;
}

Bureaucrat::~Bureaucrat() {
//    std::cout << _name << " : Bureaucrat deleted" << std::endl;
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat & other) {
    if (this == &other)
        return (*this);
    if (other.getGrade() < 1)
        throw Bureaucrat::GradeTooHighException (_name, _grade);
    if (other.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException (_name, _grade);
    this->_grade = other._grade;
    return (*this);
}

std::string Bureaucrat::getName () const {
    return (this->_name);
}

int Bureaucrat::getGrade () const {
    return (this->_grade);
}

void Bureaucrat::incrementGrade () {
    if ((this->_grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException (_name, _grade - 1);
    _grade -= 1;
}
void Bureaucrat::decrementGrade () {
    if ((this->_grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException (_name, _grade + 1);
    _grade += 1;
}

void Bureaucrat::signForm(Form & formToSign) {
    if (this->_grade <= formToSign.getSignGrade())
        std::cout << this->_name << " signs a form " << formToSign.getName() << std::endl;
    else
        std::cout << this->_name << " cannot sign a form " << formToSign.getName() << ": ";
}

void Bureaucrat::executeForm(const Form &form) {
    if (form.getSignStatus() == 0 || this->_grade > form.getExecGrade()) {
        std::cout << this->_name << " cannot execute a form " << form.getName() << ": ";
    }
    else
        std::cout << "Bureaucrat " << this->_name << " executes form " << form.getName() << std::endl;
    form.execute(*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException () {
    this->_nameHi = "Unnamed";
    this->_gradeHi = 150;
}

Bureaucrat::GradeTooHighException::GradeTooHighException (const std::string &name, const int &grade) {
    _nameHi = name;
    _gradeHi = grade;
}

const char*	Bureaucrat::GradeTooHighException::what () const throw() {
    std::string out;
    out = _nameHi + ": Cannot complete request, grade is TOO HIGH: " + std::to_string(_gradeHi);
    const char *char_array = &out[0];
    return (char_array);
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

Bureaucrat::GradeTooLowException::GradeTooLowException () {
    _nameLow = "Unnamed";
    _gradeLow = 150;
}

Bureaucrat::GradeTooLowException::GradeTooLowException (const std::string &name, const int &grade) {
    _nameLow = name;
    _gradeLow = grade;
}

const char*	Bureaucrat::GradeTooLowException::what () const throw() {
    std::string out;
    out = _nameLow + ": Cannot complete request, grade is TOO LOW: " + std::to_string(_gradeLow);
    const char *char_array = &out[0];
    return (char_array);
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat & other) {
    out << other.getName() << ": bureaucrat grade " << other.getGrade();
    return out;
}
