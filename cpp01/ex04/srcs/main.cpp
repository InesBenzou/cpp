#include "../includes/class.hpp"

int main (int ac, char **av)
{
    FileProcessor fp;
    std::ifstream inputFile;
    if (ac != 4)
    {
        std::cerr << "Error : Please enter 3 arguments : <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    fp.name = av[1];
    fp.s1 = av[2];
    fp.s2 = av[3];
    fp.newName = fp.name + ".replace";
    std::ofstream outputFile(fp.newName);
    if (fp.validateArguments(fp.s1, fp.s2) == false)
        return (1);
    if (fp.check_files(inputFile, outputFile) == false)
        return (1);
    fp.searchAndReplace(inputFile, outputFile);
    inputFile.close();
    outputFile.close();
    return (0);
}
