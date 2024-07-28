#include "../includes/class.hpp"

FileProcessor::FileProcessor()
{}

bool FileProcessor::validateArguments(std::string& s1, std::string& s2)
{
    if (s1.empty() || s2.empty())
    {
        std::cerr << "Error : Please enter valid arguments" << std::endl;
        return false;
    }
    return (true);
}

bool FileProcessor::check_files(std::ifstream& inputFile, std::ofstream& outputFile)
{
    inputFile.open(this->name);
    if (!inputFile.is_open())
    {
        std::cerr << "Error : can't open the file" << std::endl;
        inputFile.close();
        return (false);
    }
    if (!outputFile.is_open())
    {
        std::cerr << "Error : can't create the file" << std::endl;
        outputFile.close();
        return (false);
    }
    return (true);
}

void FileProcessor::searchAndReplace(std::ifstream& inputFile, std::ofstream& outputFile)
{
    std::string line;
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(this->s1, pos)) != std::string::npos)
        {
            line.replace(pos, this->s1.length(), this->s2);
            pos += this->s2.length();
        }
        outputFile << line << std::endl;
    }
}

FileProcessor::~FileProcessor()
{
}