//  Find the peek element of a Mountain array using the binary search apporach
#include "bits/stdc++.h"
using namespace std;
int Find_Peek_Of_Mountain(int array[10])
{
    int start = 0;
    int end = 10 - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (array[mid - 1] < array[mid] && array[mid + 1] < array[mid])
        {
            return mid;
        }
        if (array[mid] < array[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = end - 1;
        }

        mid = start + (end - start) / 2;
    }
}
int main()
{
    int array[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 4, 3, 2, 1};

    int max = Find_Peek_Of_Mountain(array);
    cout << "The value of peek element is " << max << " Which is " << array[max] << endl;
}