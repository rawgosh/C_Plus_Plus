/* sizeof() -> determines the size in bytes of a: variables, data_type, class, objects etc. */

#include <iostream>

int main()
{
    std::string name;

    std::cout << "Name: " << name;
    std::getline(std::cin, name);
    
    std::cout << sizeof(name); // gives the size of string

    std::string cars[] = {"BMW", "Audi", "Corvette"};
    std::cout << sizeof(cars)/sizeof(std::string); // gives how many element in array

    return 0;
}