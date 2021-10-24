#include "Array.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */

int main()
{
    std::cout << RED << "-------- INTEGERS TEST -------- " << RESET << std::endl;
    try {
        Array<int> emptyArr;
        std::cout << emptyArr << std::endl;
        std::cout << "arrInt[0] = " << emptyArr[0] << std::endl;
        std::cout << "arrInt[1] = " << emptyArr[1] << std::endl;
    }
    catch (const std::exception & e) {
        std::cerr <<e.what() << std::endl;
    }
    try {
        Array<int> arrInt(3);
        arrInt[0] = 42;
        std::cout << arrInt << std::endl;
        std::cout << "arrInt[2] = " << arrInt[2] << std::endl;
        std::cout << "arrInt[5] = " << arrInt[5] << std::endl;

    }
    catch (const std::exception & e) {
        std::cerr <<e.what() << std::endl;
    }

    std::cout << RED << "-------- STRING TEST -------- " << RESET << std::endl;
    try {
        Array<std::string> strArr(15);
        for (int i = 0; i < 15; i++)
            strArr[i] = 'a' + i;
        std::cout << strArr << std::endl;
        std::cout << "strArr[2] = " << strArr[2] << std::endl;
        std::cout << "strArr[5] = " << strArr[5] << std::endl;
        std::cout << "strArr[15] = " << strArr[15] << std::endl;
    }
    catch (const std::exception & e) {
        std::cerr <<e.what() << std::endl;
    }

    std::cout << RED << "-------- FLOAT TEST -------- " << RESET << std::endl;
    try {
        Array<float> flArr(10);
        for (int i = 0; i < 10; i++)
            flArr[i] = static_cast <float> (97.1f + i);
        std::cout << flArr << std::endl;
        std::cout << "float[2] = " << flArr[2] << std::endl;
        std::cout << "float[5] = " << flArr[5] << std::endl;
        std::cout << "float[15] = " << flArr[15] << std::endl;
    }
    catch (const std::exception & e) {
        std::cerr <<e.what() << std::endl;
    }
}
