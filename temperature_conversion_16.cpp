#include <iostream>

int main()
{
    int convert;
    double temperature;
    std::cout << "Enter the temperature :";
    std::cin >> temperature;

    std::cout << "******** CHANGING TEMPERATURE ********\n";
    std::cout << " 1 -> Celsius to Fahrenheit \n";
    std::cout << " 2 -> Fahrenheit to Celsius \n";
    std::cin >> convert;
    std::cout << std::endl;
    std::cout << std::endl;

    switch (convert)
    {
        case 1:
            temperature = (1.8 * temperature) + 32;
            std::cout << " Temperature : " << temperature << " F" << std::endl;
            break;
        case 2:
            temperature = (temperature - 32) / 1.8;
            std::cout << " Temperature : "<< temperature << " C" << std::endl;
            break;
        default:
            std::cout << "Convert into something :(";
    }
    return 0;
}