#include <iostream>
#include <ctime>

int main()
{
    std::string function[3][3] = {{"eat", "drink", "sleep"}, {"read", "write", "speak"}, {"run", "swim", "play"}}; // should atleast define the column for the array

    // generating a random row and random column
    srand(time(NULL));
    int a = (rand() % 3);
    int b = (rand() % 3);
    
    std::cout << function[a][b]; 
    std::cout << std::endl;


    // to calculate the rows and column of the array
    int rows = sizeof(function)/sizeof(function[0]);
    int columns = sizeof(function[0])/sizeof(function[0][0]);

    // using loop to display all the value in matrix form   
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            std::cout << function[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}