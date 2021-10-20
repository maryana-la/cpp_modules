#include <iostream>
#include <string>
#include <cstring>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

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

    /*
     *  exception classes
     */

    class GradeTooHighException: public std::exception {
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

std::ostream& operator<< (std::ostream &out, const Bureaucrat & other); //перегрузка оператора <<

#endif //BUREAUCRAT_HPP
