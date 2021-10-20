#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
    const std::string _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(const std::string tar);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    virtual ~RobotomyRequestForm();

    std::string getTarget () const;

    RobotomyRequestForm & operator= (const RobotomyRequestForm &other);

    virtual void execute(Bureaucrat const & executor) const;
};

#endif //ROBOTOMYREQUESTFORM_HPP
