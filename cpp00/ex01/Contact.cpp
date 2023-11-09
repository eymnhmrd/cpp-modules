#include "Contact.hpp"

Contact::Contact()
{
    // std::cout << "Constructor Called" << std::endl;
    // return ;
}

Contact::~Contact()
{
    // std::cout << "Deconstructor Called" << std::endl;
    // return ;
}

std::string Contact::getData(std::string str)
{
    std::string data;
    bool        valid = false;

    std::cout << str ;
    while (!valid)
    {
        std::getline(std::cin, data);
        if (!data.empty())
            valid = true;
        else if (std::cin.eof())
        {
            std::cout << "EOF reached" << std::endl;
            exit(EXIT_FAILURE);
        }
        else
        {
            std::cout << "Please enter valid data !!" << std::endl;
            std::cout << str;
        }
    }
    return (data);
}

bool       Contact::checkNumber(std::string num)
{
    for (size_t i = 0; i < num.length();i++)
    {
        if (!std::isdigit(num[i]))
            return (false);
    }
    return (true);
}

std::string     Contact::getPhoneNumber(std::string str)
{
    std::string     num;
    bool            valid = false;

    std::cout << str;
    while (!valid)
    {
        std::getline(std::cin, num);
        if (!num.empty() && checkNumber(num))
            valid = true;
        else if (std::cin.eof())
        {
            std::cout << "EOF reached" << std::endl;
            exit(EXIT_FAILURE); 
        }
        else 
        {
            std::cout << "Please enter valid data !!" << std::endl;
            std::cout << str;
        }
    }
    return (num);
}

void    Contact::init(void)
{
    this->FirstName = getData("Enter your first name : ");
    this->LastName = getData("Enter your last name : ");
    this->NickName = getData("Enter your nickname : ");
    this->PhoneNumber = getPhoneNumber("Enter your phone number : ");
    this->DarkestSecret = getData("Enter your darkest secret : ");
}

std::string Contact::printData(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void    Contact::view()
{
    if (this->FirstName.empty() || this->LastName.empty() || this->NickName.empty())
        return ;
    std::cout << "|" << std::setw(10) << index;
    std::cout << "|" << std::setw(10) << printData(FirstName);
    std::cout << "|" << std::setw(10) << printData(LastName);
    std::cout << "|" << std::setw(10) << printData(NickName);
    std::cout << "|" << std::endl;
}

void    Contact::setIndex(int i)
{
    this->index = i;
}

void    Contact::viewEndl()
{
    if (this->FirstName.empty() || this->LastName.empty() || this->NickName.empty())
        return ;
    std::cout << "\tContact : \t"  << index << std::endl;
    std::cout << "\tFirst name : \t" << FirstName << std::endl;
    std::cout << "\tLast name : \t" << LastName << std::endl;
    std::cout << "\tNick name : \t" << NickName << std::endl;
    std::cout << "\tPhone number : \t" << PhoneNumber << std::endl;
}