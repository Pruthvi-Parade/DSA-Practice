#include "bits/stdc++.h"
using namespace std;
int kadane(int array[], int count)
{
    int mx = 0, Current_Sum = 0;
    for (int i = 0; i < count; i++)
    {
        Current_Sum += array[i];
        if (Current_Sum < 0)
        {
            Current_Sum = 0;
        }
        mx = max(mx, Current_Sum);
    }
    return mx;
}
int main()
{
    int count;

    cin >> count;
    int array[count];
    for (int i = 0; i < count; i++)
    {
        cin >> array[i];
    }

    // BruteForce

    // int mx = 0, sum = 0;
    // for (int i = 0; i < count; i++)
    // {
    //     for (int j = i; j < count; j++)
    //     {
    //         sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum = sum + array[k];
    //             cout << array[k] << " ";
    //         }
    //         mx = max(mx, sum);
    //         cout << "\n";
    //     }
    // }
    // cout << "The max sum of sub arrays = " << mx;

    // Optimized

    // int current_Sum[count + 1];
    // current_Sum[0] = 0;

    // for (int i = 1; i <= count; i++)
    // {
    //     current_Sum[i] = current_Sum[i - 1] + array[i - 1];
    // }

    // int mx = INT_MIN;
    // for (int i = 1; i <= count; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < count; j++)
    //     {
    //         sum = current_Sum[i] - current_Sum[j];
    //         mx = max(mx, sum);
    //     }
    // }

    // cout << "The Max Of Sub Arrays is  : " << mx;

    // More Optimized (Kadane Algorithm)

    // int Current_Sum = 0, mx = 0;

    // for (int i = 0; i < count; i++)
    // {
    //     Current_Sum += array[i];
    //     if (Current_Sum < 0)
    //     {
    //         Current_Sum = 0;
    //     }
    //     mx = max(mx, Current_Sum);
    // }

    // printf("Max Sub Array sum : %d", mx);

    // Sub Array sum for a circular Array

    int Converted;
    int Non_Converted;
    int Total_Sum = 0;
    Non_Converted = kadane(array, count);

    for (int i = 0; i < count; i++)
    {
        Total_Sum += array[i];
        array[i] = -array[i];
    }
    Converted = Total_Sum + kadane(array, count);

    // cout << Total_Sum << "\t" << Converted << "\t" << Non_Converted;

    cout << max(Converted, Non_Converted) << endl;
}