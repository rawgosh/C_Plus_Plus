// recursion -> a techinque where the function calls itself within

#include <iostream>
using namespace std;

void walk(int steps)
{
    if (steps > 0)
    {
        cout << " You're walking!" << endl;
        walk(steps - 1); // calling the walk function within
    }
    else
    {
        cout << " You're not walking!";
    }
}
int fact(int num)
{
    if (num > 1)
    {
        return num * fact(num - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    walk(5);
    cout << "Factorial of 4 is : " << fact(4);

    return 0;
}