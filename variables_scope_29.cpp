// Local variable -> declared inside a function block
// Global variable -> declared outside of all functions

#include <iostream>

int global_v = 9; //global variable, can be accessed by any function
int num11 = 100;

int num(int local_v)
{
    int num = 50;
    std::cout << num << std::endl; // -> takes local variable
    std::cout << ::num11 << std::endl; // -> takes global variable

    std::cout << "num: " << local_v << std::endl;
    std::cout << global_v;

}

int main()
{
    int local_v = 18; // it cant be accessed by other function unless it is passed with the function as parameter
    num(local_v);

    return 0;
}