//const parameter -> parameter that is effectively read-only

#include <iostream>
using namespace std;

//passing by reference 
void info(const string &name, const int &age) // now the values the variables holds cant be changed
{
    cout << name << ": " << age << endl;
}
int main()
{
    string name = "Silver";
    int age = 18;

    info(name,age);
    return 0;
}