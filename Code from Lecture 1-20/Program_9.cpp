#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n :- ";
    cin >> n;

    // Problem 2

    int row = 1, temp = n, x = n;

    while (row <= n)
    {
        // Print Triangle 1
        int col = 1;
        while (col <= temp)
        {
            cout << col;
            col = col + 1;
        }
        temp = temp - 1;

        // Print triangle 2
        int start = row - 1;
        while (start)
        {
            cout << "*";
            start = start - 1;
        }

        //print Triangle 3
        col = n;
        while (col >= 1)
        {
            if (col <= x)
            {
                cout << col;
            }
            else
                cout << "*";
            col = col - 1;
        }
        x = x - 1;
        cout << "\n";
        row = row + 1;
    }
}