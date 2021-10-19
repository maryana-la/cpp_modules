#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <string>
# include <fstream>

class ShrubberyCreationForm : public Form {
private:
    const std::string _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(const std::string tar);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    virtual ~ShrubberyCreationForm();

    std::string getTarget () const;

    ShrubberyCreationForm & operator= (const ShrubberyCreationForm &other);

    virtual void execute(Bureaucrat const & executor) const;
};

#endif //SHRUBBERYCREATIONFORM_HPP
