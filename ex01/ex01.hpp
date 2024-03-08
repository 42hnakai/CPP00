#ifndef _EX01_H_
#define _EX01_H_

#include <iostream>
#include <string>

class Contact{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

class PhoneBook{
    public:
        Contact contact[8];
        void serch(char *contact);
        void add(Contact contact);
        void display_contacts(int index);
    private:
};

#endif