//This code checks the validity of a credit card number using the Luhn algorithm.

#include <iostream>
using namespace std;

int getDigits(const int number)
{
    return number % 10 + (number / 10 % 10); // splits the 2 digit number and sums it
}
int oddDigits(const string cardNumber)
{
    int oddSum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        oddSum += getDigits(cardNumber[i] - '0'); // no need to double the odd digits
    }
    return oddSum;

}
int evenDigits(const string cardNumber)
{
    int evenSum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        evenSum += getDigits((cardNumber[i] - '0') * 2);
    }
    return evenSum;
}
int main()
{
    int number;
    string cardNumber;
    int result = 0; // to get the sum of odd digits and even digits number

    cout << "Enter your credit card number :";
    getline(cin >> ws, cardNumber);

    result = oddDigits(cardNumber) + evenDigits(cardNumber);
    if (result % 10 == 0)
    {
        cout << cardNumber << " IS VALID";
    }
    else
    {
        cout << cardNumber << " IS INVALID";
    }

    return 0;
}