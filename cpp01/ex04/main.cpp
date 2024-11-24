#include <iostream>
#include <fstream>
#include <string>
#include "replace.hpp"

bool    checkArguments(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << RED << ERROR_1 << GREEN << USAGE << NORMAL << std::endl;
        return false;
    }
    if (!argv[1][0] || !argv[2][0] || !argv[3][0])
    {
        std::cerr << RED << ERROR_2 << NORMAL << std::endl;
        return false;
    }
    return true;
}

bool    isFileOpened(std::ios& file)
{
    if (!file)
    {
        std::cerr << RED << ERROR_3 << NORMAL << std::endl;
        return false;
    }
    return true;
}

int main(int argc, char **argv)
{
    std::ifstream   input_file;
    std::ofstream   output_file;
    std::string     out_file_name;
    std::string     s1;
    std::string     s2;
    std::string     line;

    if (!checkArguments(argc, argv))
        return 1;
    out_file_name = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    input_file.open(argv[1]);
    out_file_name.append(".replace");
    if (!isFileOpened(input_file))
        return 2;
    output_file.open(out_file_name.c_str());
    if (!isFileOpened(output_file))
    {
        input_file.close();
        return 2;
    }
    while (std::getline(input_file, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        output_file << line << std::endl;
    }
    input_file.close();
    output_file.close();
    return 0;
}