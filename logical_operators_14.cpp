/*
&& (and) -> check if two conditions are true
|| (or) -> check if one condition is true
! (not) -> reverses the logical state of its operand
*/

#include <iostream>

int main()
{
    int temp;
    std::cout << "Enter your surrounding temperature :";
    std::cin >> temp;

    // checking if both conditions are true
    if (temp >= 20 && temp <= 30)
    {
        std::cout << "The temp is good for you.\n";
    }
    else
    {
        std::cout << "Its bad. \n";
    }

    // checking if one condition is true
    if (temp <= 0 || temp >= 50)
    {
        std::cout << "You cant live here.\n";
    }

    // checking for not logical operator
    bool sun;
    std::cout << "Is it sunny outside? :";
    std::cin >> sun;
    if (!sun) // -> this operator checks for the opposite boolean rather than the passed one 
    // we can just type the name of variable to check if it is true or false
    {
        std::cout << "Enjoy your bright day :)" << std::endl;
    }
    else 
    {
        std::cout << "Your day is as dark as your future." << std::endl;
    }

    return 0;
}