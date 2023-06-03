#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your name :" ;
    std::getline(std::cin, name);

    std::cout << name.length() << std::endl; // length of string
    std::cout << name.empty() << std::endl; // checks if the string is empty or not. 0->false, 1->true

    name.clear(); //clears the string
    std::cout << name << std::endl;

    name.append("hello"); // appends the string by adding a new string
    std::cout << name << std::endl;

    std::cout << name.at(0) << std::endl; // displays the character at the given index

    name.insert(2, "R"); // inserts the character in the passed index
    std::cout << name << std::endl;

    std::cout << name.find(' ') << std::endl; // finds the character in the string

    std::cout << name.erase(0, 3) << std::endl; // erases from the passed starting index to the ending index, ending index is not inclusive.

    return 0;
}