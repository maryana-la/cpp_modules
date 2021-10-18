#include "Bureaucrat.hpp"

#ifndef FORM_HPP
#define FORM_HPP

class Form {
private:
    const std::string _form_name;
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

    void beSigned (const Bureaucrat & br);

    /*
     *  exception classes
     */

    class GradeTooHighException : public std::exception {
    private:
        std::string _nameHi;
        int _gradeHi;
    public:
        GradeTooHighException ();
        GradeTooHighException (std::string const &name, const int &grade);
        virtual const char*	what () const throw();
        virtual ~GradeTooHighException() throw();
    };

    class GradeTooLowException: public std::exception {
    private:
        std::string _nameLow;
        int _gradeLow;
    public:
        GradeTooLowException ();
        GradeTooLowException (std::string const &name, const int &grade);
        virtual const char*	what () const throw();
        virtual ~GradeTooLowException() throw();
    };
};

std::ostream& operator<< (std::ostream &out, const Form & other); //перегрузка оператора <<

#endif //FORM_HPP