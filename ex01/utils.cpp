#include "ex01.hpp"

bool is_error_input(std::string input)
{
    if(input.length() > 1)
        return true;
    else if(input[0] < '0' || input[0] > '7')
        return true;
    return false;
}
