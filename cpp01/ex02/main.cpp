#include <iostream>

int main () {

    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Address of the string: " << &str << std::endl;
    std::cout << "Address by stringPTR:  " << stringPTR << std::endl;
    std::cout << "Address by stringREF:  " << &stringREF << std::endl;

    std::cout << "String content by stringPTR: " << *stringPTR << std::endl;
    std::cout << "String content by stringREF: " << stringREF << std::endl;

    return 0;
}