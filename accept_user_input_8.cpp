// cout -> character output
// cin -> character input

#include <iostream>

int main()
{
    std::string name;
    int age;
    std::string hobby;

    std::cout << "Enter name: ";
    std::cin >> name; // accepting input in name variable

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "What do you like to do?: ";
    std::getline(std::cin >> std::ws, hobby); //it excludes newline which previous cin statement had.

    std::cout << hobby << " Ohh Thats interesting" << '\n';
    std::cout << "Hello " << name <<". You are " << age << " years young. ;)" << std::endl;

    return 0;
}