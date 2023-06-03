//pseudo-random -> NOT truly random (but close)

#include <iostream>
#include <ctime> // to work with random numbers

int main()
{
    srand(time(NULL)); // Seed the random number generator with the current time

    int num = (rand() % 6) + 1; //returns random number from 1 to 6

    std::cout << num;

    return 0;
}