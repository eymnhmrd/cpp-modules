#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void    usage(void);
        void    addContact(void);
        void    display(void);
        void    search(void);
        int     getIndex(void);
};

#endif