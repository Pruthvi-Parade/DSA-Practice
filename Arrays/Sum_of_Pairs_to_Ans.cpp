#include "bits/stdc++.h"
using namespace std;
bool BruteForce(int array[], int count, int X)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (array[j] + array[i] == X)
            {
                // cout << i << "\t" << j;
                return 1;
            }
        }
    }
    return 0;
}

bool Optimized_1(int array[], int count, int X)
{

    int Current, Previous;
    for (int i = 1; i < count; i++)
    {
        Current = array[i];
        Previous = i - 1;
        while (array[Previous] > Current && Previous >= 0)
        {
            array[Previous + 1] = array[Previous];
            Previous--;
        }
        array[Previous + 1] = Current;
    }
    int Start = 0, End = count - 1;
    cout << "\nEnd : " << End << "\tStart : " << Start << endl;
    while (Start < End)
    {
        if (array[Start] + array[End] == X)
        {
            return 1;
        }
        else if (array[Start] + array[End] < X)
        {
            Start++;
        }
        else
        {
            End--;
        }
    }
    return 0;
}

int main()
{
    int count, X;

    cin >> count;
    int array[count];
    for (int i = 0; i < count; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the value you want to search : ";
    cin >> X;
    // cout << BruteForce(array, count, X);

    cout << Optimized_1(array, count, X);
}