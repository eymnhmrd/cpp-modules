#include <iostream>
#include <fstream> 

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Usage : ./sed filename to-find to-replace" << std::endl;
        return (0); 
    }

    std::string filename = argv[1];
    std::string toFind = argv[2];
    std::string toReplace = argv[3];
    std::string line;
    std::string totalLine;

    std::ifstream inputFile(filename);
    std::ofstream outputfile(filename + ".replace");

    if (!inputFile.is_open() || !outputfile.is_open())
    {
        std::cerr << "Failed to open the file" << std::endl;
        return (1);
    }

    while (std::getline(inputFile, line))
    {
        for (size_t i = 0; 1; i += toReplace.length())
        {
            i = line.find(toFind);
            if (i == std::string::npos)
                break;
            line.erase(i, toFind.length());
            line.insert(i, toReplace);
        }
        totalLine += line + '\n';
    }
    outputfile << totalLine;

    return (0);
}
