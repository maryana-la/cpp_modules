#include "easyfind.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */

template < typename T >
void print (const T & elem) {
    std::cout << elem << " ";
}

int main () {

    {
        std::cout << RED << "-------- vector <int> TEST -------- " << RESET << std::endl;
        std::vector<int> numArr;
        for (int i = 0; i < 10; i++) {
            numArr.push_back(i);
            print(numArr[i]);
        }
        std::cout << std::endl;
        try {
            std::vector<int>::iterator iter;
            iter = easyfind(numArr, 5);
            std::cout << *iter << ": number is a part of array" << std::endl;
            iter = easyfind(numArr, 20);
            std::cout << *iter << ": number is a part of array" << std::endl;
        }
        catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        catch (...) {
            std::cout << "No pass for exception" << std::endl;
        }
    }

    {
        std::cout << RED << "-------- list <int> TEST -------- " << RESET << std::endl;
        std::list<int> lstArr;
        for (int i = 0; i < 10; i++) {
            lstArr.push_back(i * 2);
            std::cout << i * 2 << " ";
        }
        std::cout << std::endl;
        try {
            std::list<int>::iterator iter;
            iter = easyfind(lstArr, 6);
            std::cout << *iter << ": number is a part of array" << std::endl;
            iter = easyfind(lstArr, 65);
            std::cout << *iter << ": number is a part of array" << std::endl;
        }
        catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        catch (...) {
            std::cout << "No pass for exception" << std::endl;
        }

    }
}
