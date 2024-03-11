#include "ex01.hpp"

void PhoneBook::display_field(const std::string& field)
{
    if(field.length() > 10)
        std::cout << std::setw(10) << field.substr(0,9) << "." << "|" << std::endl;
    else
        std::cout << std::setw(11) << field << "|" << std::endl;
}

void PhoneBook::display_contacts(int index)
{
    std::cout.setf(std::ios::right);
    display_field(contact[index].first_name);
    display_field(contact[index].last_name);
    display_field(contact[index].nickname);
    display_field(contact[index].phone_number);
    display_field(contact[index].darkest_secret);
}

void PhoneBook::add(int i,Contact input_contact)
{
    contact[i].first_name = input_contact.first_name;
    contact[i].last_name = input_contact.last_name;
    contact[i].nickname = input_contact.nickname;
    contact[i].phone_number = input_contact.phone_number;
    contact[i].darkest_secret = input_contact.darkest_secret;
}
