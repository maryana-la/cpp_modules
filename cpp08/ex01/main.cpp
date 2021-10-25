#include "span.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */

int main()
{
    {
        std::cout << RED << "-------- TEST FROM SUBJECT -------- " << RESET << std::endl;
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp;
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::cout << RED << "-------- INT_MIN INT_MAX TEST -------- " << RESET << std::endl;
        try {
            Span sp = Span(4);
            sp.addNumber(2147483647);
            sp.addNumber(-2147483648);
            sp.addNumber(17);
            sp.addNumber(9);
            std::cout << sp;
            std::cout << "shortest:" << sp.shortestSpan() << std::endl;
            std::cout << "longest: " << sp.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << RED << "-------- ARRAY OF 100000 TEST -------- " << RESET << std::endl;
        try {
            Span t1 = Span (100000);
            t1.addNumber(1);
            t1.addNumber(99998, 121);
            t1.addNumber(120);
            std::cout << "Max number of elements: " << t1.getCapacity() << std::endl;
            std::cout << "shortest:" << t1.shortestSpan() << std::endl;
            std::cout << "longest: " << t1.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << RED << "-------- ADD_NUM VIA ITERATOR TEST -------- " << RESET << std::endl;
        try {
            Span t1 = Span (10000);
            t1.addNumber(1);
            t1.addNumber(120);

            std::vector<int> temp;
            temp.assign(15, 42);
            std::vector<int>::iterator it;
            it = temp.begin();
            t1.addNumber(it, temp.end()-1);
            std::cout << t1;
            std::cout << "shortest:" << t1.shortestSpan() << std::endl;
            std::cout << "longest: " << t1.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << RED << "-------- ARRAY OVERFLOW TEST -------- " << RESET << std::endl;
        try {
            Span t1 = Span (10000);
            t1.addNumber(10000, 1);
            t1.addNumber(120);
            std::cout << t1;
            std::cout << "shortest:" << t1.shortestSpan() << std::endl;
            std::cout << "longest: " << t1.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << RED << "-------- SPAN ERROR TEST -------- " << RESET << std::endl;
        try {
            Span t1 = Span (10);
            t1.addNumber(-2147483648);
            std::cout << t1;
            std::cout << "shortest:" << t1.shortestSpan() << std::endl;
            std::cout << "longest: " << t1.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << RED << "-------- SPAN ERROR TEST  - 2-------- " << RESET << std::endl;
        try {
            Span t1 = Span (0);
            std::cout << t1;
            std::cout << "longest: " << t1.longestSpan() << std::endl;
            std::cout << "shortest:" << t1.shortestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << RED << "-------- COPY OPERATOR TEST -------- " << RESET << std::endl;
        try {
            Span t1 = Span (12);
            t1.addNumber (10, 2);
            std::cout << t1;
            Span t2 (t1);
            std::cout << t2;
            t1.addNumber(9);
            t1.addNumber(9);
            t2.addNumber(7);
            std::cout << t1;
            std::cout << t2;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}
