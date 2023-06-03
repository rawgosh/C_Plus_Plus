/* Array -> a data structure that can hold multiple values 
        -> values are accessed by an index number
*/

#include <iostream>

int main()
{
    std::string cars[] = {"BMW","Audi","GTR","Jaguar"}; // value inside of an array sould be of same data type

    std::cout << cars[0] << std::endl; // accessing array using the index
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;
    std::cout << cars[3] << std::endl;
    std::cout << std::endl;

    int a;
    std::cout << "Enter the number of cars :";
    std::cin >> a;
    
    std::string car[1000];

    for(int i = 0; i < a; i++)
    {
        std::cout << "Enter the car :";
        std::getline(std::cin>>std::ws,car[i]); //taking array as an user input
    }

    for(int i = 0; i < a; i++)
    {
        std::cout << car[i] << std::endl;
    }

    return 0;
}