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

    // Spiral logic

    int Row_Start = 0, Row_End = row - 1, Col_Start = 0, Col_End = column - 1;

    while (Row_Start <= Row_End && Col_Start <= Col_End)
    {
        // For Row_Start

        for (int col = Col_Start; col <= Col_End; col++)
        {
            cout << array[Row_Start][col];
        }
        Row_Start++;

        // For Col_End

        for (int row = Row_Start; row <= Row_End; row++)
        {
            cout << array[row][Col_End];
        }
        Col_End--;

        // For Row_End

        for (int col = Col_End; col >= Col_Start; col--)
        {
            cout << array[Row_End][col];
        }
        Row_End--;

        // For Col_Start

        for (int row = Row_End; row >= Row_Start; row--)
        {
            cout << array[row][Col_Start];
        }
        Col_Start++;
    }
    return 0;
}