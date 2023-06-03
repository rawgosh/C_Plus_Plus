// break -> breaks out of a loop
// continue -> skip current iteration

#include <iostream>

int main()
{
    for( int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            break; // stops the loop after i = 13
            // continue; -> skips the loop at only 13
        }
        std::cout << i << std::endl;
    }
    return 0;
}