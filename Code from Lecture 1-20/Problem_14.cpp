// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include "bits/stdc++.h"
using namespace std;
int main()
{
    // int number, reverse = 0, remainder;
    // cout << "Enter a number : ";
    // cin >> number;
    // int number_1 = number;
    // while (number != 0)
    // {
    //     remainder = number % 10;
    //     reverse = reverse * 10 + remainder;
    //     number = number / 10;
    // }
    // cout << "Original Number : " << number_1 << " Reversed number : " << reverse;
    int x = 0, n;
    cin >> n;
    while (true)
    {
        if (pow(2, x) == n)
        {
            return true;
        }
        else
        {
            x++;
        }
    }
}