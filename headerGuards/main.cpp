#include "square.h"
#include "wave.h"
#include <iostream>

int main()
{
    std::cout << "Square sides: " << getSquareSides() << std::endl;
    return 0;
}

// so it will not compile as the function getSquareSides() is defined in square.h
// and included in wave.h, which is then included in main.cpp. 
//This causes a redefinition error because the function is defined multiple times. 
//To fix this, you should use header guards in square.h to prevent multiple inclusions of the same header file.