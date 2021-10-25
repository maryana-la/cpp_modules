#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>

class Span {
private:
    unsigned int _capacity;
    std::vector<int> _arr;
    Span ();
public:
    /* canonic form */
    Span (unsigned int n);
    Span (const Span & other);
    ~Span();
    Span & operator= (const Span & other);

    /* getters */
    unsigned int getCapacity () const;
    std::vector<int> getArray () const;

    /* methods */
    unsigned long shortestSpan ();
    unsigned long longestSpan ();

    void addNumber (int addNum);
    void addNumber (int size, int value);

    template <class InputIterator>
    void addNumber(InputIterator first, InputIterator last)
    {
        if (this->_arr.size() + std::abs(std::distance(first, last)) > this->_capacity)
            throw Span::VectorOverflow();
        this->_arr.insert(_arr.end(), first, last);
    }

    /* exception handler */
    class VectorOverflow : public std::exception {
    public:
        virtual const char * what() const throw();
    };

    class SpanError : public std::exception {
    public:
        virtual const char * what() const throw();
    };
};

std::ostream& operator<< (std::ostream &out, const Span & other);

#endif //SPAN_HPP
