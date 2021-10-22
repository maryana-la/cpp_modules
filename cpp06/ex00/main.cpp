#include "convert.hpp"

int main (int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }

    std::string str (argv[1]);
    if (str == "-inff" || str == "+inff" || str == "nanf" ||
        str == "-inf" || str == "+inf" || str == "nan") {
        infExceptionCast(str);
        return 0;
    }
    if (str.length() == 1) {
        int x = static_cast <int> (str[0]);
        SingleCharPrint (x);
        return 0;
    }
    try {
        double n = checkStringValid(str);
        printChar(n);
        printInt(n);
        printFloat(n);
        printDouble(n);
    }
    catch (const std::exception & e) {
        std::cerr << e.what() << '\n';
    }

    catch (...) // обработчик catch-all
    {
        std::cout << "We caught an exception of an undetermined type!\n";
    }
    return 0;
}
