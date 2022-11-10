#include "bits/stdc++.h"
using namespace std;

int findTriplet(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] != array[j])
            {
                if ( (array[j+1] != array[i]) && (array[j+1] != array[j]) && array[i] + array[j] + array[j+1])
                {
                    
                }
                
            }
            else
            {
                j++;
            }
        }
    }
}

int main()
{
    int array[10], n;
    cout << "Enter the elements of the array :- ";
    for (int i = 0; i < 6; i++)
    {
        cin >> array[i];
        n++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }

    cout << "Your triplets are :- ";
    findTriplet(array, n);
}