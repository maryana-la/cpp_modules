#include "convert.hpp"

const char *ErrorInput::what() const throw() {
    return ("Numeric argument is required");
}

const char*	OverflowLimits::what () const throw() {
    return ("impossible");
}

void infExceptionCast(std::string str) {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (str == "-inff" || str == "+inff" || str == "nanf") {
        std::cout << "float: " << str << std:: endl;
        std::cout << "double: " << str.erase(str.length() - 1, 1)  << std:: endl;
    }
    else if (str == "-inf" || str == "+inf" || str == "nan") {
        std::cout << "float: " << str << "f" << std:: endl;
        std::cout << "double: " << str << std:: endl;
    }
}

void SingleCharPrint (int x) {
    std::cout << "char: " << static_cast <char> (x) << std::endl;
    std::cout << "int: " << x << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast <float> (x);
    std::cout << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast <double> (x) << std::endl;
}

double checkStringValid (std::string str) {
    size_t len = str.length();
    for (size_t i = 0; i < len; i++) {
        if ((str[i] == '.' && std::isdigit(str[i - 1])) || ((str[i] == '-' || str[i] == '+') && i == 0) ||
        (str[i] == 'f' && i == (len - 1)))
            continue;
        else if (!std::isdigit(str[i]))
            throw ErrorInput();
    }
    return (std::strtod(str.c_str(), NULL));
}

void printChar (double n) {
    std::cout << "char: ";
    try
    {
        char num = static_cast <char> (n);
        if (n > std::numeric_limits<char>::max() || n < std::numeric_limits<char>::min())
            throw OverflowLimits ();
        if (num < 32 || num > 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << num << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
}

void printInt (double n) {
    std::cout << "int: ";
    try {
        int num = static_cast <int> (n);

        if (n > std::numeric_limits<int>::max() || n < std::numeric_limits<int>::min())
            throw OverflowLimits ();
        std::cout << num << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
}

void printFloat (double n) {
    std::cout << "float: ";
    try {
        float num = static_cast <float> (n);
        if (n > std::numeric_limits<float>::max())
            throw OverflowLimits ();
        std::cout << std::fixed << std::setprecision(1) << num;
        std::cout << "f" << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
}

void printDouble (double n) {
    std::cout << "double: ";
    try {
        if (n > std::numeric_limits<double>::max())
            throw OverflowLimits ();
        std::cout << std::fixed << std::setprecision(1) << n;
        std::cout << std::endl;
    }
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
}
