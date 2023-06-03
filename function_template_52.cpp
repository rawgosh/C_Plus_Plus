// function template -> describes what a function looks like

#include <iostream>
using namespace std;

// Template function "func" to take two parameters of any data type "T".
template <typename T>
T func(T x, T y) // it is set to recieve the arguments of same data type
{
    return x + y;
}

template <typename U, typename V>  // takes two parameters of any data types "U" and "V"
auto max(U a, V b) //type of the returned value will be automatically deduced based on the input parameters
{
    return (a > b) ? a : b; // returns the maximum value
}

int main()
{
    cout << func(true,false);
    cout << max (34, 98.4);
    return 0;
}