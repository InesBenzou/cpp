#ifndef CLASS_HPP
#define CLASS_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <fstream>

class FileProcessor
{
    public :
        FileProcessor();
        std::string s1;
        std::string s2;
        std::string name;
        std::string newName;
        bool validateArguments(std::string& s1, std::string& s2);
        bool check_files(std::ifstream& inputFile, std::ofstream& outputFile);
        void searchAndReplace(std::ifstream& inputFile, std::ofstream& outputFile);
        ~FileProcessor();
};

#endif