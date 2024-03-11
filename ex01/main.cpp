#include "ex01.hpp"

int main()
{
    std::string command;
    PhoneBook phonebook;
    Contact contact;
    std::string index;
    int i = 0;

    command = " ";
    while(command.compare("EXIT") != 0)
    {
        std::cout << "Command: ";
        std::getline(std::cin,command);
        if(std::cin.eof())
        {
            std::cout << "[ERROR]:not end of file" << std::endl;
            return 0;
        }
        if(command.compare("ADD") == 0)
        {
            std::cout << "First Name: ";
            std::getline(std::cin,contact.first_name);
            if(std::cin.eof())
            {
                std::cout << "[ERROR]:not end of file" << std::endl;
                return 0;
            }
            std::cout << "Last Name: ";
            std::getline(std::cin,contact.last_name);
            if(std::cin.eof())
            {
                std::cout << "[ERROR]:not end of file" << std::endl;
                return 0;
            }
            std::cout << "Nickname: ";
            std::getline(std::cin,contact.nickname);
            if(std::cin.eof())
            {
                std::cout << "[ERROR]:not end of file" << std::endl;
                return 0;
            }
            std::cout << "Phone Number: ";
            std::getline(std::cin,contact.phone_number);
            if(std::cin.eof())
            {
                std::cout << "[ERROR]:not end of file" << std::endl;
                return 0;
            }
            std::cout << "Darkest Secret: ";
            std::getline(std::cin,contact.darkest_secret);
            if(std::cin.eof())
            {
                std::cout << "[ERROR]:not end of file" << std::endl;
                return 0;
            }
            phonebook.add(i % 8,contact);
            i++;
        }
        else if(command.compare("SEARCH") == 0)
        {
            std::cout << "index: ";
            std::cin >> index;
            if(is_error_input(index) == true)
                std::cout << "Error: Invalid index" << std::endl;
            else
                phonebook.display_contacts(stoi(index));
        }
    }
    return 0;
}
