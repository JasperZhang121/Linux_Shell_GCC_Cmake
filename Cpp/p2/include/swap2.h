#pragma once
#include <iostream>

class swap2
{

public:

    swap2(int a, int b){
        this->_a = a;
        this->_b = b;
    }

    void run();
    void printInfo();

private:
    int _a;
    int _b;


};



