#ifndef _EX01_H_
#define _EX01_H_

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>

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
        void add(int i,Contact contact);
        void display_contacts(int index);
        void display_field(const std::string& field);
    private:
};

bool is_error_input(std::string input);

#endif