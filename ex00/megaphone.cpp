#include <iostream>

bool is_upper(char c)
{
    if(c >= 'A' && c <= 'Z')
        return true;
    return false;
}

int main(int argc,char *argv[])
{
    int i = 1;
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    else
    {
        while(i < argc)
        {
            std::locale l;
            while(*argv[i])
            {
                if(is_upper(*argv[i]))
                    std::cout << *argv[i];
                else
                    std::cout << std::toupper(*argv[i], l);
                argv[i]++;
            
            }
            i++;
        }
        std::cout << std::endl;
    }
    return 0;
}