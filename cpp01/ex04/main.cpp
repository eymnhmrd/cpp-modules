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

    if (toFind.empty())
    {
        std::cout << "to-find cannot be empty" << std::endl;
        return (0);
    }

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
        for (size_t i = 0; (i = line.find(toFind, i)) != std::string::npos;)
        {
            line.erase(i, toFind.length());
            line.insert(i, toReplace);
            i += toReplace.length();
        }
        totalLine += line + '\n';
    }
    outputfile << totalLine;

    return (0);
}


// while (std::getline(inputFile, line))
// {
//     for (size_t i = 0; (i = line.find(toFind)) != std::string::npos;)
//     {
//         std::cout << "first" << i << std::endl;
//         line.erase(i, toFind.length());
//         std::cout << "second" << i << std::endl;
//         line.insert(i, toReplace);
//         std::cout << "third" << i << std::endl;
//         i += toReplace.length();
//         std::cout << "fourth" << i << std::endl;
//     }
//     totalLine += line + '\n';
// }
// outputfile << totalLine;