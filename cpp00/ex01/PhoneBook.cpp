#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::usage()
{
    std::cout << "\t*****************************************" << std::endl;
    std::cout << "\t*         Welcome to PhoneBook          *" << std::endl;
    std::cout << "\t* Usage :                               *" << std::endl;
    std::cout << "\t* For adding a contact type : ADD       *" << std::endl;
    std::cout << "\t* For searching a contact type : SEARCH *" << std::endl;
    std::cout << "\t* Or you can just exit with : EXIT      *" << std::endl;
    std::cout << "\t*****************************************" << std::endl;
}

void    PhoneBook::addContact(void)
{
    static int i;

    this->contacts[i].init();
    this->contacts[i].setIndex(i);
    i++;
    if (i == 8)
        i = 0;
}

void    PhoneBook::display(void)
{
    std::cout << "\t     *List Of Contacts*\t" << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < 8; i++)
    {
        this->contacts[i].view();
    }
    std::cout << std::endl;
}


int    PhoneBook::getIndex()
{
    int     i = 0;
    bool    valid = false;

    std::cout << "Enter an index to search for : ";
    while (!valid)
    {
        std::cin >> i;
        if (std::cin.good() && (i >= 0 && i <= 7))
            valid = true;
        else 
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter a valid number > : ";
        }
        if (std::cin.eof())
        {
            std::cout << "EOF reached" << std::endl;
            exit(EXIT_FAILURE);
        }
    }
    return (i);
}

void    PhoneBook::search()
{
    int i = getIndex();
    this->contacts[i].viewEndl();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   
}

