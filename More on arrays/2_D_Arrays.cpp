#include "bits/stdc++.h"
using namespace std;
int main()
{
    int row, column;

    cout << "Enter the number of rows and number of columns : ";
    cin >> row >> column;

    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> array[i][j];
        }
        cout << "\n";
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}