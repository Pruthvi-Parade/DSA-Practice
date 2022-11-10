#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Enter the values of n1, n2, n3 : ";
    cin >> n1 >> n2 >> n3;
    int array_1[n1][n2];
    int array_2[n2][n3];
    int Answer_1[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> array_1[i][j];
        }
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> array_2[i][j];
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            Answer_1[i][j] = 0;
            for (int k = 0; k < n2; k++)
            {
                Answer_1[i][j] += array_1[i][k] * array_2[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << Answer_1[i][j] << " ";
        }
        cout << "\n";
    }
}