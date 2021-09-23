#include <iostream>
#include <fstream>

void error_print(std::string err)
{
    std::cerr << err << std::endl;
    exit (1);
}

void replace_symbols (std::ifstream& file_in, std::ofstream& file_out, char *argv[])
{
    std::string strDelete = argv[2]; //to delete
    std::string strNew = argv[3]; //to insert
    size_t s1_len = strDelete.length();
    size_t s2_len = strNew.length();

    while (file_in) {
        std::string strInput;
        std::getline(file_in, strInput);

        std::string::size_type pos = 0;
        while (pos != std::string::npos) {
            pos = strInput.find(strDelete, pos);
            if (pos != std::string::npos) {
                strInput.erase(pos, s1_len);
                strInput.insert(pos, strNew);
                pos += s2_len;
            }
            else
                break ;
        }
        file_out << strInput << std::endl;
    }
}

int main (int argc, char *argv[]){

    if (argc != 4)
        error_print("Error. Wrong number of arguments.");

    if (argv[2][0] == '\0' || argv[3][0] == '\0')
        error_print("Error. Arguments are invalid.");

    std::ifstream file_in(argv[1]);
    if (!file_in)
        error_print("Oops, cannot read from file. Try again");

    std::string out(argv[1]);
    for (int i = 0; out[i]; i++) {
        out[i] = (char)toupper(out[i]);
    }
    out += ".replace";
    std::ofstream file_out(out, std::ios::trunc);
    if (!file_out)
        error_print("Oops, cannot create file for writing. Try again");

    replace_symbols(file_in, file_out, argv);
    file_out.close();
    file_in.close();

    return 0;
}