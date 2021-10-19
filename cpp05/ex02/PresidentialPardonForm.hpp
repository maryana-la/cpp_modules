#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
    const std::string _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(const std::string tar);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    virtual ~PresidentialPardonForm();

    std::string getTarget () const;

    PresidentialPardonForm & operator= (const PresidentialPardonForm &other);

    virtual void execute(Bureaucrat const & executor) const;
};
#endif //PRESIDENTIALPARDONFORM_HPP
