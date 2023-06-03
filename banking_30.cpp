#include <iostream>
#include <iomanip> //accessing a function which can set the precision for the floating values

double deposit() //creating a function with double datatype
{
    double amount;
    
    std::cout << "Enter the amount to deposit:";
    std::cin >> amount; // asking for the amount to be deposited

    if (amount > 0)
    {
        return amount;
    }
    else 
    {
        std::cout << "Thats not possible here.";
    }
}

double withdraw(double balance) // function with a parameter that returns double
{
    double amount;

    std::cout << "Enter the amount to withdraw:";
    std::cin >> amount;

    if (amount > balance) // if it is  true this block runs
    {
        amount -= balance;
        std::cout << "Insufficient funds $"<< amount << std::endl;
        return 0;
    }
    else if (amount < 0) // if it is true this block runs
    {
        std::cout << "Invalid amount\n";
        return 0;
    }
    else
    {
        return amount;
    }
}

void show(double balance) // recieving balance as an argument
{
    std::cout << "Your balance is : $" <<std::setprecision(2) << std::fixed /*here will be only two numbers after decimal*/ << balance << std::endl;
}

int main()
{
    double balance = 0;
    int choice = 0;

    std::cout << "******************************\n";
    std::cout << "* Welcome to the local bank  *\n";
    std::cout << "* -------------------------  *\n";
    std::cout << "* 1 -> Deposit               *\n";
    std::cout << "* 2 -> Withdraw              *\n";
    std::cout << "* 3 -> Show Balance          *\n";
    std::cout << "* 4 -> Exit                  *\n";
    std::cout << "******************************\n";

    do
    {
        std::cout << "Please enter your choice :";
        std::cin >> choice;

        std::cin.clear(); // Clear the error flags 
        fflush(stdin); // Clear the input buffer

        switch(choice)
        {
            case 1:
                balance += deposit();
                show(balance);
                break;
            case 2:
                balance -= withdraw(balance);
                show(balance);
                break;
            case 3:
                show(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting\n";
                break;
            default:
                std::cout << "NOT A VALID CHOICE :(\n";
        }
    }
    while(choice != 4); // this loop runs unless the choice is 4


    return 0;
}