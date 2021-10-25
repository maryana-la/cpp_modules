#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

class ErrorException : public std::exception {
public:
    virtual const char * what () const throw () {
        return ("Number is not found");
    }
};

template < typename T >
typename T::iterator easyfind (T &arr, const int n) {
    typename T::iterator it;
    it = std::find(arr.begin(), arr.end(), n);
    if (it == arr.end())
        throw ErrorException();
    return it;
}

#endif //EASYFIND_HPP
