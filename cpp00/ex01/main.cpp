#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
    PhoneBook   p;
    std::string command = "";

    (void)argv;
    if (argc != 1)
    {
        std::cout << "This program doesn't take any arguments" << std::endl;
        return (0);
    }   
    p.usage();
    std::cout << std::endl;
    while (command != "EXIT" && !std::cin.eof())
    {
        std::cout << "> ";
        getline(std::cin, command);
        if (command == "ADD")
        {
            p.addContact();
        }
        else if (command == "SEARCH")
        {
            p.display();
            p.search();
        }
    } 
    return (0);
}