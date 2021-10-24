#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>

template < typename T >
class Array {
private:
    unsigned int _lenAr;
    T * _array;
public:
    Array() : _lenAr(0), _array (new T[0]) {}
    Array(unsigned int n) : _lenAr(n), _array (new T[n]()) { }

    Array(const Array & other) : _lenAr(other._lenAr) {
        this->_array = new T[other.size()];
        for (unsigned int i = 0; i < other.size(); i++)
            this->_array[i] = other._array[i];
    }

    ~Array() { delete [] _array; }

    Array & operator= (const Array & other) {
        if (this == other)
            return (this);
        this->_lenAr = other.size();
        if (this->_array)
            delete this->_array;
        this->_array = new T[this->_lenAr];
        for (unsigned int i = 0; i < this->_lenAr; i++)
            this->_array[i] = other._array[i];
    }

    /* for changing value */
    T& operator[] (unsigned int i) {
        if (i >= this->_lenAr)
            throw AccessError();
        return (this->_array[i]);
    }

    /* for printing out value */
    const T& operator[] (unsigned int i) const {
        if (i >= this->_lenAr)
            throw AccessError();
        return (this->_array[i]);
    }

    unsigned int size () const { return this->_lenAr; }

class AccessError : public std::exception {
    public:
        virtual const char*	what () const throw() { return "Requested element is out of the limits"; }
    };
};

template < typename T >
std::ostream& operator<< (std::ostream &out, const Array<T> &arr) {
    out << "Array of " << arr.size() << ": < ";
    for (unsigned int i = 0; i < arr.size(); i++)
        out << arr[i] << " ";
    out << ">";
    return out;
}

/* specialization for float */
template <>
std::ostream& operator<< (std::ostream &out, const Array <float> &arr) {
    out << "Array of " << arr.size() << ": < ";
    for (unsigned int i = 0; i < arr.size(); i++)
        out << std::fixed << std::setprecision(1) << arr[i] << "f ";
    out << ">";
    return out;
}

#endif //ARRAY_HPP
