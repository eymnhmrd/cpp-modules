#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
        int         index;
    public:
        Contact();
        ~Contact();
        std::string getData(std::string str);
        std::string getPhoneNumber(std::string str);
        bool        checkNumber(std::string str);
        std::string printData(std::string str);
        void        init(void);
        void        view();
        void        setIndex(int i);
        void        viewEndl();
};

#endif