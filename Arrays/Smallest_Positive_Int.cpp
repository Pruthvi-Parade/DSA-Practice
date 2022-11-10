#include "bits/stdc++.h"
using namespace std;
int main()
{
    int count;

    cout << "Enter the number of elements :- ";
    cin >> count;

    int array[count];
    cout << "Enter the elements : ";
    for (int i = 0; i < count; i++)
    {
        cin >> array[i];
    }
    int smallest = array[0];
    for (int i = 1; i < count; i++)
    {
        if (array[i] > 0 && array[i] > -1)
        {
            if (smallest == 0)
                smallest = array[i];
            if (smallest > array[i])
                smallest = array[i];
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (smallest + 1 == array[i])
        {
            smallest++;
        }

        else if (i == (count - 1))
        {
            smallest = smallest + 1;
        }
    }

    cout << "\nThe smallest positive missing Integer is : " << smallest;
}