#include "ex01.hpp"

int main()
{
    std::string command;
    PhoneBook phonebook;
    Contact contact;
    int index;
    int i = 0;

    command = " ";
    while(command.compare("EXIT") != 0)
    {
        std::cout << "Command: ";
        std::cin >> command;
        if(command.compare("ADD") == 0)
        {
            std::cout << "First Name: ";
            std::cin >> contact.first_name;
            std::cout << "Last Name: ";
            std::cin >> contact.last_name;
            std::cout << "Nickname: ";
            std::cin >> contact.nickname;
            std::cout << "Phone Number: ";
            std::cin >> contact.phone_number;
            std::cout << "Darkest Secret: ";
            std::cin >> contact.darkest_secret;
            phonebook.add(i % 8,contact);
            i++;
        }
        else if(command.compare("SEARCH") == 0)
        {
            std::cout << "index: ";
            std::cin >> index;
            phonebook.display_contacts(index);
        }
    }
    return 0;
}
