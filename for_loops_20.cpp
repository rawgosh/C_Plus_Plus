// for loop -> runs a loop for specified number of times
// for(initialization, condition, changes)

#include<iostream>

int main()
{
    int loop;

    for(loop = 1; loop <= 10; loop++)
    {
        std::cout << "Hello I am -> " << loop << std::endl;
    }
    std::cout << "I am the end of the program!" << std::endl;


    return 0;
}