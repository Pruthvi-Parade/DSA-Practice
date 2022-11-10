#include "bits/stdc++.h"
using namespace std;

bool Is_Prime(int value)
{
    for (int i = 2; i < value; i++)
    {
        if (value % i == 0)
            return 0;
    }

    return 1;
}

int fact(int number)
{
    int answer = 1;

    for (int i = 1; i <= number; i++)
    {
        answer = answer * i;
    }
    return answer;
}
int nCr(int n, int r)
{
    int answer = fact(n) / (fact(n - r) * fact(r));
    return answer;
}

int update(int a)
{
    int ans = a * a;
    return ans;
}
int main()
{

    // Here is the logic for Power

    // int Value;
    // cout << "Enter the value you want to check : ";
    // cin >> Value;
    // if (Is_Prime(Value) == 0)
    // {
    //     cout << "The given number isn't prime";
    // }
    // else
    // {
    //     cout << "The given number is prime";
    // }

    // Here is the program for nCr

    // int n, r;

    // cout << "Enter the values of n and r: ";
    // cin >> n >> r;

    // cout << nCr(n, r) << endl;

    int a = 14;
    a = update(a);
    cout << a << endl;
}