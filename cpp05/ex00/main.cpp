#include "Bureaucrat.hpp"

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int main () {

    std::cout << RED << "TRY TO CREATE TOO LOW" << RESET << std:: endl;
    try
    {
        Bureaucrat Bob("Bob", 24);
        std::cout << Bob << std::endl;
        Bureaucrat Sara("Sara", 156);
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << RED << "TRY TO CREATE TOO HIGH" << RESET << std:: endl;
    try
    {
        Bureaucrat Bob("Sam", -24);
        std::cout << Bob << std::endl;
        Bureaucrat Sara("Sara", 56);
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl << RED << "CREATION OF INSTANCES" << RESET << std:: endl;
    Bureaucrat *Lolo = new Bureaucrat("Lolo", 1);
    Bureaucrat *Coco = new Bureaucrat("Coco", 150);
    Bureaucrat Pepe("Pepe", 10);
    std::cout << Pepe << std::endl;
    Pepe = *Lolo;
    std::cout << Pepe << std::endl;
    std::cout << std::endl << RED << "TRY TO INCREMENT" << RESET << std:: endl;
    try
    {
        std::cout << *Lolo << std::endl;
        Lolo->incrementGrade();
        std::cout << *Lolo << std::endl;
        std::cout << *Coco << std::endl;
        Coco->incrementGrade();
        std::cout << *Coco << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << RED << "TRY TO DECREMENT" << RESET << std:: endl;
    try
    {
        std::cout << *Lolo << std::endl;
        Lolo->decrementGrade();
        std::cout << *Lolo << std::endl;
        std::cout << *Coco << std::endl;
        Coco->decrementGrade();
        std::cout << *Coco << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    /*
    ** example of uncaught exception!
    */
//    Bureaucrat Bob("Bob", -1);
//    std::cout << "Code that will abort" << std::endl;
    delete Lolo;
    delete Coco;

    return 0;
}
