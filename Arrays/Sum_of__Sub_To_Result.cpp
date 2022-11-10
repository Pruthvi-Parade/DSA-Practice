#include <iostream>
using namespace std;
int main()
{
    int count;
    int sum = 0;
    cout << "Enter Array Size : ";
    cin >> count;

    int array[count];
    cout << "Enter Array Elements : ";
    for (int i = 0; i < count; i++)
    {
        cin >> array[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         // cout << array[j] << "\t";
    //         sum += array[j];
    //         // cout << "\nIt all adds up to : " << sum;
    //         if (sum == 7)
    //         {
    //             cout << i << j;
    //         }
    //     }
    // }

    // Alternative Solution

    int start = 0, end = 0, Current_Sum = 1;
    int X;
    cout << "Enter the value : ";
    cin >> X;
    while (true)
    {
        if (Current_Sum + array[end] < X)
        {
            Current_Sum = Current_Sum + array[end];
            end++;
        }
        else
        {
            if (array[start] + array[end] != X)
            {
                start++;
            }
            else
            {
                cout << array[start] << "\t"
                     << array[end];
                break;
            }
        }
    }
}