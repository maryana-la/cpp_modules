# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */

int main () {
    std::cout << std::endl << RED << "CREATION OF INSTANCES" << RESET << std:: endl;
    Bureaucrat *Lolo = new Bureaucrat("Lolo", 140);
    std::cout << *Lolo << std::endl;
    Bureaucrat *Vip = new Bureaucrat("VIP", 2);
    std::cout << *Vip << std::endl;
    ShrubberyCreationForm *shrub = new ShrubberyCreationForm("Gargen");
    std::cout << *shrub << std::endl;
    RobotomyRequestForm *robot = new RobotomyRequestForm("Machine");
    std::cout << *robot << std::endl;
    PresidentialPardonForm *pardon = new PresidentialPardonForm("Enemy");
    std::cout << *pardon << std::endl;

    std::cout << std::endl << GREEN << "SHRUBBERYCREATIONFORM" << RESET << std:: endl;
    std::cout << std::endl << RED << "TRY TO EXECUTE UNSIGNED" << RESET << std:: endl;
    try {
        Lolo->executeForm(*shrub);
    }
    catch(const char *str) {
        std::cout << str << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << RED << "TRY TO EXECUTE WITH LOW GRADE" << RESET << std:: endl;
    try {
       shrub->beSigned(*Lolo);
       std::cout << *shrub << std::endl;
       Lolo->executeForm(*shrub);
    }
    catch(const char *str) {
        std::cout << str << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << RED << "EXECUTION" << RESET << std:: endl;
    try {
        shrub->beSigned(*Lolo);
        std::cout << *shrub << std::endl;
        Vip->executeForm(*shrub);
    }
    catch(const char *str) {
        std::cout << str << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << GREEN << "ROBOTOMYREQUESTFORM" << RESET << std:: endl;
    std::cout << std::endl << RED << "TRY TO EXECUTE UNSIGNED" << RESET << std:: endl;
    try {
        Vip->executeForm(*robot);
    }
    catch(const char *str) {
        std::cout << str << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << RED << "TRY TO EXECUTE WITH LOW GRADE" << RESET << std:: endl;
    try {
        robot->beSigned(*Vip);
        std::cout << *robot << std::endl;
        Lolo->executeForm(*robot);
    }
    catch(const char *str) {
        std::cout << str << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << RED << "EXECUTION" << RESET << std:: endl;
    try {
        robot->beSigned(*Vip);
        std::cout << *robot << std::endl;
        Vip->executeForm(*robot);
    }
    catch(const char *str) {
        std::cout << str << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << GREEN << "PRESIDENTIALPARDONFORM_HPP" << RESET << std:: endl;
    std::cout << std::endl << RED << "TRY TO EXECUTE UNSIGNED" << RESET << std:: endl;
    try {
        Vip->executeForm(*pardon);
    }
    catch(const char *str) {
        std::cout << str << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << RED << "TRY TO EXECUTE WITH LOW GRADE" << RESET << std:: endl;
    try {
        pardon->beSigned(*Vip);
        std::cout << *pardon << std::endl;
        Lolo->executeForm(*pardon);
    }
    catch(const char *str) {
        std::cout << str << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << RED << "EXECUTION" << RESET << std:: endl;
    try {
        pardon->beSigned(*Vip);
        std::cout << *pardon << std::endl;
        Vip->executeForm(*pardon);
    }
    catch(const char *str) {
        std::cout << str << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
    return 0;
}




