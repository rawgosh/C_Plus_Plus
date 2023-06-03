// dynamic memory -> memory that is allocated after the program is already compiled and running

#include <iostream>
using namespace std;
int main()
{
    int *pNum = NULL;
    pNum = new int; // allocating memory in the heap rather than in stack
    *pNum = 99;

    cout << "Address :" << pNum << endl;
    cout << "Value :" << *pNum << endl;

    char *pGrades = NULL;
    int size;

    cout << "How many inputs? :";
    cin >> size;
    
    pGrades = new char[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the grade :";
        cin >> pGrades[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades; // to delete an array

    return 0;
}