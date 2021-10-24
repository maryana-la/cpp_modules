#include "iter.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */

class Testing {
private:
    int _n;
public:
    Testing(void): _n(21) {return ; }
    Testing(int num): _n(num) {return ;}

    int get() const {return this->_n; }

    Testing& operator++ () {
        this->_n += 1;
        return (*this);
    }

    Testing operator++ (int) {
        Testing temp (*this);
        this->_n += 1;
        return temp;
    }
};

std::ostream &operator<< (std::ostream &o, Testing const &rhs) { o << rhs.get(); return o; }

template < typename T >
void print (T &x ) {
    std::cout << x << std::endl;
    return;
}

template < typename T >
void incrementVar (const T &x ) {
    std::cout << "-----------" << std::endl;
    T y = x;
    y++;
    print (y);
    ++y;
    print (y);
    return ;
}

int main () {
    {
        std::cout << RED << "-------- INTEGERS TEST -------- " << RESET << std::endl;
        int tab[] = {0, 1, 2, 3, 4};
        iter (tab, 5, print);
        iter (tab, 5, incrementVar);
    }
    {
        std::cout << RED << "-------- FLOAT TEST -------- " << RESET << std::endl;
        float tab[] = {0.5f, 56.4f, 6.0f};
        iter (tab, 3, print);
        iter (tab, 3, incrementVar);
    }
    {
        std::cout << RED << "-------- CLASS TEST -------- " << RESET << std::endl;
        Testing tab2[5];
        iter (tab2, 4, print);
        iter (tab2, 4, incrementVar);
    }
    {
        std::cout << RED << "-------- STRING TEST -------- " << RESET << std::endl;
        char tab1[] = "Hello World";
        iter (tab1, 11, print);
        iter (tab1, 11, incrementVar);
    }
    return 0;
}
