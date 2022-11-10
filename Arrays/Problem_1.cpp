#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter Array Size : ";
    cin >> n;

    int array[n];
    cout << "Enter Array Elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int max = array[0];
    int min = array[0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; i < n; i++)
        {
            if (max < array[i])
            {
                max = array[i];
            }
            if (min > array[i])
            {
                min = array[i];
            }
        }
    }

    cout << max << " Is the largest \n";
    cout << min << " Is the min \n";
}