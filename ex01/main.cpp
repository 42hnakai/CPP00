#include <iostream>
#include <string>

void display_contacts()
{
    std::cout << "DISPLAY" << std::endl;
}

int main()
{
    std::string command = "";
    std::string ADD = "ADD";
    std::string SEARCH = "SEARCH";
    std::string EXIT = "EXIT";

    while(command.compare(EXIT)!=0)
    {
        std::cin >> command;
        if(command.compare(ADD) == 0)
        {
            std::cout << "ADD" << std::endl;
        }
        else if(command.compare(SEARCH) == 0)
        {
            display_contacts();
        }
    }
}
