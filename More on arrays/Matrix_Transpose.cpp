#include "bits/stdc++.h"
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the row and columns : ";
    cin >> row >> col;
    int array[row][col];
    int array_2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array_2[j][i] = array[i][j];
        }
        cout << " \n";
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array_2[i][j] << " ";
        }
        cout << "\n";
    }
}