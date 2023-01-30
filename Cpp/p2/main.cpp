#include "swap2.h"

int main(int argc, char** argv)
{
    swap2 mySwap(1,2);
    mySwap.printInfo();
    mySwap.run();
    mySwap.printInfo();
    // run by using command: g++ main.cpp src/swap2.cpp -Iinclude -o main
    return 0;

    
}