#include "bits/stdc++.h"
using namespace std;
int main()
{

    int no_of_rows, no_of_col;
    cout << "Enter the number of rows and columns : ";
    cin >> no_of_rows >> no_of_col;
    int array[no_of_rows][no_of_col];
    for (int i = 0; i < no_of_rows; i++)
    {
        for (int j = 0; j < no_of_col; j++)
        {
            cin >> array[i][j];
        }
    }
    int X;
    bool flag = false;
    cout << "Enter the element to be searched : ";
    cin >> X;
    int row = 0, col = no_of_col - 1;

    while (row < no_of_rows && col >= 0)
    {
        if (array[row][col] == X)
        {
            flag = true;
        }
        if (array[row][col] < X)
        {
            row++;
        }
        else
        {
            col--;
        }
    }
    if (flag)
    {
        cout << "Element Found ";
    }
    else
    {
        cout << "Element not Found ";
    }
}