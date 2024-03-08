#include <iostream>
#include <string>
#include "ex01.hpp"

// void display_contacts()
// {
//     std::cout << "DISPLAY" << std::endl;
// }

int main(int argc,char *argv[])
{
    std::string command;
    PhoneBook phonebook;
    Contact contact;

    command = argv[1];
    if(command.compare("ADD") == 0)
    {
        std::cout << "ADD" << std::endl;
    }
    else if(command.compare("SEARCH") == 0)
    {
        std::cout << "SEARCH" << std::endl;
    }
    else if(command.compare("EXIT") == 0)
    {
        std::cout << "EXIT" << std::endl;
    }
}
