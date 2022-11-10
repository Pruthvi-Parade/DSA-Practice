#include <bits/stdc++.h>
using namespace std;

// Finding power of a number :

int power_of_number(int number, int power)
{

    // Base case
    if (power == 0)
        return 1;

    return number * power_of_number(number, power - 1);
}

// Factorial of a number :

int factorial(int number)
{

    // Base case
    if (number == 0)
        return 1;

    return number * factorial(number - 1);
}

void reverse_counting(int number)
{

    // Base condition
    if (number == 0)
        return;

    reverse_counting(number - 1);
    cout << number << " ";
}
int main()
{
    // int number, power;

    // cout << "Enter number and power : ";
    // cin >> number >> power;

    // cout << "The power is  : " << power_of_number(number, power) << endl;

    // int number;

    // cout << "Enter the factorial : ";
    // cin >> number;

    // cout << "The answer is : " << factorial(number) << endl;

    int number;

    cout << "Enter the number : ";
    cin >> number;

    reverse_counting(number);

    return 0;
}