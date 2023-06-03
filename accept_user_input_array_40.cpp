#include <iostream>

int main()
{
    std::string mobiles[5], temp;
    int size = sizeof(mobiles)/sizeof(std::string);
    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter a mobile you like or 'q' to quit :";
        std::getline(std::cin, temp); // takes the user input in a temporary variable
        if (temp == "q")
        {
            break;
        }
        else
        {
            mobiles[i] = temp; // assigning the value to the array
        }
    }
    std::cout << "Mobiles you likes are :" << std::endl;
    for(int i = 0; !mobiles[i].empty(); i++) // loops until the array is empty
    {
        std::cout << mobiles[i] << std::endl;
    }
    return 0;
}