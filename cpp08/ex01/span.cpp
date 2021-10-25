#include "span.hpp"

Span::Span() { }

Span::Span(unsigned int n) : _capacity(n) {}

Span::Span(const Span &other) : _capacity(other._capacity), _arr(other._arr) {}

Span::~Span() {}

Span & Span::operator=(const Span &other) {
    if (this == &other)
        return *this;
    this->_capacity = other._capacity;
    this->_arr = other._arr;
    return (*this);
}

unsigned int Span::getCapacity () const {
    return this->_capacity;
}

std::vector<int> Span::getArray () const {
    return this->_arr;
}

void Span::addNumber(int addNum) {
    if (_arr.size() >= _capacity)
        throw VectorOverflow();
    _arr.push_back(addNum);
}

void Span::addNumber (int length, int value) {
    if (static_cast <unsigned int>(length) > _capacity)
        throw VectorOverflow();
    _arr.insert(_arr.end(), length, value);
}


unsigned long Span::shortestSpan () {
    if (_arr.size() <= 1)
        throw SpanError();

    std::vector<int> temp;
    temp = this->_arr;
    std::sort(temp.begin(), temp.end());

    unsigned long minDist = UINT32_MAX;

    std::vector<int>::iterator it;
    for (it = temp.begin() + 1; it < temp.end(); it++) {
        if ((unsigned long)*it - (unsigned long)*(it - 1) < minDist)
            minDist = (unsigned long)*it - (unsigned long)*(it - 1);
    }
    return minDist;
}

unsigned long Span::longestSpan() {
    if (_arr.size() <= 1)
        throw SpanError();

    std::vector<int> temp;
    temp = this->_arr;
    std::sort(temp.begin(), temp.end());

    unsigned long maxDist;
    maxDist = (long) *(temp.end() - 1) - (long) *temp.begin();
    return maxDist;
}

const char * Span::VectorOverflow::what() const throw() {
    return ("Cannot add number, maximum capacity is reached");
}

const char * Span::SpanError::what() const throw() {
    return ("Span cannot be found");
}

std::ostream& operator<< (std::ostream &out, const Span & other) {
    out << "Max number of elements: " << other.getCapacity() << std::endl;
    std::vector<int> temp;
    temp = other.getArray();
    std::vector<int>::iterator it;
    for (it = temp.begin(); it < temp.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    return out;
}
