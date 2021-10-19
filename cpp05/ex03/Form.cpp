#include "Form.hpp"

Form::Form() : _fName("name"), _gradeSign(1), _gradeExec(1){
}

Form::Form(std::string name, int toSign, int toExec) : _fName(name), _gradeSign(toSign), _gradeExec(toExec) {
    if (_gradeExec < 1 || _gradeSign < 1)
        throw Form::GradeTooHighException();
    if (_gradeSign > 150 || _gradeExec > 150)
        throw Form::GradeTooLowException();
    _signed = 0;
}

Form::Form(const Form & ot) : _fName(ot._fName), _gradeSign(ot._gradeSign), _gradeExec(ot._gradeExec) {
    if (ot._gradeExec < 1 || ot._gradeSign < 1)
        throw Form::GradeTooHighException();
    if (ot._gradeSign > 150 || ot._gradeExec > 150)
        throw Form::GradeTooLowException();
    this->_signed = ot._signed;
}

Form::~Form() {
//    std::cout << _fName << " : Form deleted" << std::endl;
}

Form & Form::operator=(const Form &other) {
    if (this == &other)
        return (*this);
    this->_signed = other._signed;
    return (*this);
}

std::string Form::getName () const {
    return (this->_fName);
}

int Form::getSignGrade () const {
    return (this->_gradeSign);
}

int Form::getExecGrade () const {
    return (this->_gradeExec);
}

bool Form::getSignStatus () const {
    return (this->_signed);
}

void Form::beSigned (Bureaucrat & br) {
    br.signForm(*this);
    if (br.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    _signed = 1;
}

void Form::checkExecRights(const Bureaucrat & br) const {
    if (this->_signed == 0)
        throw "form is not signed";//todo add catch in main
    if (br.getGrade() > this->_gradeExec)
        throw Form::GradeTooLowException();
}

Form::GradeTooHighException::GradeTooHighException() {
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade is TOO HIGH for the form");
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
}

Form::GradeTooLowException::GradeTooLowException() {
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade is TOO LOW for the form");
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
}

std::ostream& operator<< (std::ostream &out, const Form & ot) {
    out << ot.getName() << " form info: grade to sign " << ot.getSignGrade();
    out << ", grade to execute " << ot.getExecGrade() << ", sign status " << ot.getSignStatus();
    return (out);
}
