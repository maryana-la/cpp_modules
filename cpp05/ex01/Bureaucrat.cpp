#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException ();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException ();
    std::cout << "Bureaucrat " << _name << " created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) : _name(other._name), _grade(other._grade) {
    if (other.getGrade() < 1)
        throw Bureaucrat::GradeTooHighException ();
    if (other.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException ();
    std::cout << "Bureaucrat " << this->_name << " copied" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << _name << " : Bureaucrat deleted" << std::endl;
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat & other) {
    if (this == &other)
        return (*this);
    if (other.getGrade() < 1)
        throw Bureaucrat::GradeTooHighException ();
    if (other.getGrade() > 150)
        throw Bureaucrat::GradeTooLowException ();
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
        throw Bureaucrat::GradeTooHighException ();
    _grade -= 1;
}
void Bureaucrat::decrementGrade () {
    if ((this->_grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException ();
    _grade += 1;
}

void Bureaucrat::signForm(Form & formToSign) {
	if (this->_grade <= formToSign.getSignGrade())
		std::cout << this->_name << " signs a form " << formToSign.getName() << std::endl;
	else
		std::cout << this->_name << " cannot sign a form " << formToSign.getName() << ": ";
}

Bureaucrat::GradeTooHighException::GradeTooHighException () {
}

const char*	Bureaucrat::GradeTooHighException::what () const throw() {
    return ("Bureaucrat cannot complete request, grade is TOO HIGH");
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

Bureaucrat::GradeTooLowException::GradeTooLowException () {
}

const char*	Bureaucrat::GradeTooLowException::what () const throw() {
	return ("Bureaucrat cannot complete request, grade is TOO LOW");
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat & other) {
    out << other.getName() << ": bureaucrat grade " << other.getGrade();
    return out;
}
