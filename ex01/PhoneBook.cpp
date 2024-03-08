#include "ex01.hpp"

void PhoneBook::display_contacts(int index)
{
    std::cout << contact[index].first_name << "|"; 
    std::cout << contact[index].last_name << "|";
    std::cout << contact[index].nickname << "|"; 
    std::cout << contact[index].phone_number << std::endl; 
}

void PhoneBook::add(Contact input_contact)
{
    int i = 0;
    contact[i].first_name = input_contact.first_name;
    contact[i].last_name = input_contact.last_name;
    contact[i].nickname = input_contact.nickname;
    contact[i].phone_number = input_contact.phone_number;
    contact[i].darkest_secret = input_contact.darkest_secret;
}