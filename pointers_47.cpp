//pointers -> variable that stores the memory address of another variable

#include <iostream>
using namespace std;
int main()
{
    string likeBee = "Wasp";
    string array[5] = {"RED", "GREEN", "YELLOW", "BLUE", "BLACK"};

    // creating a pointer
    string *pLikeBee = &likeBee;
    string *pArray = array; // array doesnt require "&" sign to pass the address

    cout << pLikeBee << endl; // displays the address
    cout << *pLikeBee << endl; // displays the value at the address
    cout << *(pArray + 1) << endl; // to get the value of the array at certain index

    system("exit");
}