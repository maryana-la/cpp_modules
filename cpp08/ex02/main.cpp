#include "mutantstack.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */

int main()
{
    {
        std::cout << RED << "-------- TEST FROM SUBJECT -------- " << RESET << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);

        std::cout << "mstack.top: " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "mstack.size: " << mstack.size() << std::endl;

        mstack.push(3);
        mstack.push(5);
        mstack.push(737); //[...]
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
//        std::stack<int> s(mstack);
//        s.pop();
//        std::cout << s.top() << std::endl;
    }
    {
        std::cout << RED << "-------- SAME TEST WITH LIST -------- " << RESET << std::endl;
        std::list<int>    list;

        list.push_back(5);
        list.push_back(17);

        std::cout << "list.top: " << list.back() << std::endl;

        list.pop_back();

        std::cout << "list.size: " << list.size() << std::endl;

        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        list.push_back(0);

        std::list<int>::iterator it = list.begin();
        std::list<int>::iterator ite = list.end();
        ++it;
        --it;
        while(it != ite){
            std::cout << *it << std::endl;
            ++it;
        }

        {
            std::cout << RED << "-------- REVERSE ITERATOR TEST -------- " << RESET << std::endl;
            MutantStack<int> mstack;
            mstack.push(5);
            mstack.push(17);

            std::cout << "mstack.top: " << mstack.top() << std::endl;
            mstack.pop();
            std::cout << "mstack.size: " << mstack.size() << std::endl;

            mstack.push(3);
            mstack.push(5);
            mstack.push(737); //[...]
            mstack.push(0);

            MutantStack<int>::reverse_iterator rit = mstack.rbegin();
            MutantStack<int>::reverse_iterator rite = mstack.rend();
            ++rit;
            --rit;
            while (rit != rite) {
                std::cout << *rit << std::endl;
                ++rit;
            }
        }
    }
    return 0;
}
