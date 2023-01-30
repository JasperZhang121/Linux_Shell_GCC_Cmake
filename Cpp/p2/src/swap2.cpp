#include "swap2.h"

void swap2 :: run()
{
    int temp;
    temp = _a;
    _a = _b;
    _b = temp; 
}

void swap2 :: printInfo()
{
    std:: cout <<"a=" << _a << std::endl;
    std:: cout <<"b=" << _b << std::endl;
}