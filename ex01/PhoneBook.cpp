#include "ex01.hpp"

void PhoneBook::display_contacts(int index)
{
    std::cout.setf(std::ios::right);
    if(contact[index].first_name.length() > 10)
        std::cout << std::setw(10) << contact[index].first_name.substr(0,9) << "." << "|" << std::endl;
    else
        std::cout << std::setw(11) << contact[index].first_name << "|" << std::endl;
    if(contact[index].last_name.length() > 10)
        std::cout << std::setw(10) << contact[index].last_name.substr(0,9) << "." << "|" << std::endl;
    else
        std::cout << std::setw(11) << contact[index].last_name << "|" << std::endl;
    if(contact[index].nickname.length()> 10)
        std::cout << std::setw(10) << contact[index].nickname.substr(0,9) << "." << "|" << std::endl;
    else
        std::cout << std::setw(11) << contact[index].nickname << "|" << std::endl;
    if(contact[index].phone_number.length() > 10)
        std::cout << std::setw(10) << contact[index].phone_number.substr(0,9) << "." << "|" << std::endl;
    else
        std::cout << std::setw(11) << contact[index].phone_number << "|" << std::endl;
    if(contact[index].darkest_secret.length() > 10)
        std::cout << std::setw(10) << contact[index].darkest_secret.substr(0,9) << "." << "|" << std::endl;
    else
        std::cout << std::setw(11) << contact[index].darkest_secret << "|" << std::endl;
}

void PhoneBook::add(int i,Contact input_contact)
{
    contact[i].first_name = input_contact.first_name;
    contact[i].last_name = input_contact.last_name;
    contact[i].nickname = input_contact.nickname;
    contact[i].phone_number = input_contact.phone_number;
    contact[i].darkest_secret = input_contact.darkest_secret;
}
