#include <iostream>
using namespace std;

namespace first
{
    int age = 19;
}
namespace second
{
    int age = 20;
}

int main()
{
    using std::cout; //namespace for cout 
    using std::string; //namespace for string

    /*Namespace --> provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namepace allows for identically named entities as long as the namespaces are different*/
    int age = 18;
    
    cout << age << endl; // takes local variable
    cout << first::age << endl; // takes the value from first namespace
    cout << second::age << endl; // takes the value from second namespace

    return 0;
}