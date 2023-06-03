#include <iostream>

double totalSum(double gpa[], int size);

int main()
{
    double gpa[] = {3.56, 4, 3.90, 2.80, 3.5};
    int size = sizeof(gpa)/sizeof(gpa[0]); // we need to find the size early because after passing an array to a different function the function can't determine how big is the array

    double sum = totalSum(gpa, size); // passing array and its size to the function
    system("Pause"); // pauses the program 

    std::cout << sum << std::endl;

    return 0;
}

double totalSum(double gpa[], int size) // accepting array from a different function
{
    double sum;
    for(int i = 0; i < size; i++)
    {
        sum += gpa[i];
    }
    return sum;

}

