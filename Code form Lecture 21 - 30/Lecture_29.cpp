#include <bits/stdc++.h>
using namespace std;
#include <vector>
int main()
{
    // int n = 5;

    // int *array = new int[n];
    // cout << "Enter the numbers in the array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array[i] << " ";
    // }

    // Creating 2D ARRAYS

    // int rows, cols;
    // cout << "Enter the number of rows and cols: ";
    // cin >> rows >> cols;

    // // Creating the memory in the Heap
    // int **array = new int *[rows];

    // // Creating Pointer to the array or matrix

    // for (int i = 0; i < rows; i++)
    // {
    //     array[i] = new int[cols];
    // }

    // // Here i is for rows and j is for cols
    // // Enter the elements in the matrix

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin >> array[i][j];
    //     }
    //     cout << endl;
    // }

    // cout << "Printing now : " << endl;
    // // Printing the elements in the matrix
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << array[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    // //releasing memory
    // for (int i = 0; i < rows; i++)
    // {
    //     delete[] array[i];
    // }

    // delete[] array;

    int rows, cols;

    // Creating a vector to store the values of cols

    vector<int> vector;

    cout << "Enter the number of rows : ";
    cin >> rows;

    // Creating 2D array

    int **array = new int *[rows];

    // Creating Pointers to arrays

    for (int i = 0; i < rows; i++)
    {
        cout << "This is row number : " << i << endl;
        cout << "Enter the number of columns you want in this row : \t";
        cin >> cols;
        vector.push_back(cols);
        array[i] = new int[cols];
    }

    // Here i is for rows and j is for cols
    // Enter the elements in the matrix

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < vector[i]; j++)
        {
            cin >> array[i][j];
        }
        cout << endl;
    }

    cout << "Printing now : " << endl;
    // Printing the elements in the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < vector[i]; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    //releasing memory
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }

    return 0;
}