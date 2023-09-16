#include <iostream>
#include "../include/math_func.h"

int main(int argc, char const *argv[])
{
    std::cout<<"Hello world!\n";
    int c = addInt(1,2);
    std::cout<<"C = "<<c<<std::endl;

    int d = calSumAB();
    std::cout<<"D = "<<d<<std::endl;
    
    int e = calC();
    std::cout<<"E = "<<e<<std::endl;

    return 0;
}
