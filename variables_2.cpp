#include <iostream>
using namespace std;

int main()
{
    //INTEGERS (whole number)
    int x; //decleration
    x = 18; //assignment
    int y = 31;
    int age = 18;

    cout << x <<endl;
    cout << y <<endl;
    cout << age <<endl;

    //DOUBLE (number including decimal)
    double gpa = 3.56;
    double temperature = 31.6;
    cout << temperature << endl;

    //CHAR (single character)
    char grade = 'A';
    char names = 'X';
    cout << grade << endl; 

    //BOOLEAN (true or false)
    bool student = true;
    bool bulb = false;
    cout << bulb << endl;

    //STRING (objects that represents a sequence of text)
    string name = "Ragosh";
    string food = "Chips";
    string month = "July";
    cout << name << endl;

    // variable with texts
    cout << "Hello " << name << ". I guess you are " << age << " years old." << endl;

    return 0;
}