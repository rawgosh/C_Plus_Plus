#include <iostream>

int searchArray(int natural[], int num, int size)
{
    for(int i = 0; i < size; i++)
    {
        if (natural[i] == num)
        {
            return i;
        }
    }
    return -1; // it means something wasn't found
}


int main()
{
    int natural[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num;
    int index;
    int size = sizeof(natural)/sizeof(natural[1]);

    std::cout << "Enter a number :";
    std::cin >> num;

    index = searchArray(natural, num, size);

    if(index != -1)
    {
        std::cout << "Number " << num << " found.";
    }
    else
    {
        std::cout << "Number " << num << " not found";
    }

    return 0;
}

/*
int main()
{
    std::string cars[] = {"BMW", "Audi", "Mercedes", "Lamborghini", "Ferrari"};
    int size = sizeof(cars) / sizeof(cars[1]);

    std::string userInput;
    std::cout << "Enter a car name to search :";
    std::getline(std::cin >> std::ws, userInput);

    for (int index = 0; index < size; index++)
    {
        if (cars[index] == userInput)
        {
            std::cout << userInput << " is in the array";
            return 0; // If the userInput matches with the value inside the array it exits
        }
    }

    std::cout << userInput << " is not in the array"; // this line runs if the userInput is not matched in the array

    return 0;
}
*/