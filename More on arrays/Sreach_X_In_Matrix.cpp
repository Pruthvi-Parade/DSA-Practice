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
    }

    cout << "Enter the number to be searched : ";
    int X;
    cin >> X;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (array[i][j] == X)
            {
                cout << "Row : " << i + 1 << " Column : " << j + 1;
            }
        }
    }
}