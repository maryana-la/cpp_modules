#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string _fName;
    const int _gradeSign;
    const int _gradeExec;
    bool _signed;
    Form();
public:
    Form(std::string name, int toSign, int toExec);
    Form(const Form & other);
    ~Form();

    Form& operator= (const Form & other);

    std::string getName () const;
    int getSignGrade () const;
    int getExecGrade () const;
    bool getSignStatus () const;

    void beSigned (Bureaucrat & br);

    /*
     *  exception classes
     */

    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException ();
        virtual const char*	what () const throw();
        virtual ~GradeTooHighException() throw();
    };

    class GradeTooLowException: public std::exception {
    public:
        GradeTooLowException ();
        virtual const char*	what () const throw();
        virtual ~GradeTooLowException() throw();
    };
};

std::ostream& operator<< (std::ostream &out, const Form & other); //перегрузка оператора <<

#endif //FORM_HPP
