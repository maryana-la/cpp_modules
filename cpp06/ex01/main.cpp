#include <iostream>

typedef struct s_Data {
    int num;
    std::string str;
}               Data;

uintptr_t serialize(Data *ptr) {
    return (reinterpret_cast <uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw) {
    return (reinterpret_cast <Data*>(raw));
}

int main () {
    Data *  src = new Data;
    Data *  dest;
    uintptr_t  raw_data;

    src->num = 5;
    src->str = "Hello World";

    std::cout << "--------SERIALIZATION---------" << std::endl;
    raw_data = serialize(src);
    std::cout << "raw data: " << raw_data << std::endl;
    std::cout << "src:      " << src << std::endl;
    std::cout << "src:      num = " << src->num << " ; string = " << src->str << std::endl;
    std::cout << std::endl;
    std::cout << "--------DESERIALIZATION--------" << std::endl;
    dest = deserialize(raw_data);
    std::cout << "raw data: " << raw_data << std::endl;
    std::cout << "dest:     " << &dest << std::endl;
    std::cout << "dest:     num = " << dest->num << " ; string = " << dest->str << std::endl;

    return 0;
}
