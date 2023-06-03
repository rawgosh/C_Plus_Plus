// NULL value -> a special value that means something has no value
// nullptr -> keyword that represents a null pointer literal

#include <iostream>
using namespace std;
int main()
{
    int *pointer = nullptr; // doesnot have any address
    cout << pointer << endl;
    
    int age = 99;
    pointer = &age;
    cout << pointer << endl;

    //checking if the pointer is a null pointer
    if (pointer == nullptr)
    {
        cout << "Couldn't assign the address to the pointer";
    }
    else
    {
        cout << "Assigned the address";
    }

    return 0;
}