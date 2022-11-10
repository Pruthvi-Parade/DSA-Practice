#include <iostream>
using namespace std;
int main()
{
    int x, i, j;
    cout << "Enter the number of rows :- ";
    cin >> x;

    for (i = x - 1; i >= 0; i--)
    {
        for (j = i; j >= 0; j--)
        {
            cout << " * ";
        }
        cout << "\n";
    }

    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << "\n";
    }
}