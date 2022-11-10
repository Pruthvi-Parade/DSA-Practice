#include <iostream>
using namespace std;
int main()
{
    int n, i, j, temp = 0;
    cout << "Enter how many elements : ";
    cin >> n;
    int array[n];
    cout << "Enter the elements of array : ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
}