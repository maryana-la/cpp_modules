#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
private:
    std::string const _name;
    int _grade;
    Bureaucrat ();
public:
    Bureaucrat (std::string name, int grade);
    Bureaucrat(const Bureaucrat & other);
    ~Bureaucrat();

    Bureaucrat & operator= (const Bureaucrat & other);

    std::string getName () const;
    int getGrade () const;
    void incrementGrade ();
    void decrementGrade ();
    void signForm(Form & formToSign);

    /*
     *  exception classes
     */

    class GradeTooHighException: public std::exception {
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

std::ostream& operator<< (std::ostream &out, const Bureaucrat & other); //перегрузка оператора <<

#endif //BUREAUCRAT_HPP
