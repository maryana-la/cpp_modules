#include "Form.hpp"

Form::Form() {
}

Form::Form(std::string name, int toSign, int toExec) : _form_name(name), _gradeSign(toSign), _gradeExec(toExec) {
    if (_gradeExec < 1 || _gradeSign < 1)
        Form::GradeTooHighException();
    if (_gradeSign > 150 || _gradeExec > 150)
        Form::GradeTooLowException();
    _signed = 0;
}

Form::Form(const Form & other) {

}