#include <bits/stdc++.h>
using namespace std;
bool Is_Sorted(int array[], int size)
{
    if (size == 0 || size == 1)
    {
        return 1;
    }

    if (array[0] > array[1])
    {
        return 0;
    }
    else
    {
        return Is_Sorted(array + 1, size - 1);
    }
}

int Sum_Of_Array(int array[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return array[0];
    }
    int remaining_part = Sum_Of_Array(array + 1, size - 1);
    cout << remaining_part << endl;
    int sum = array[0] + remaining_part;

    return sum;
}

bool Linear_Search(int array[], int size, int key)
{
    cout << "Array at array[0] = " << array[0] << endl;
    if (size == 0)
    {
        cout << "Array size is zero element not found" << endl;
        return false;
    }

    if (array[0] == key)
    {
        cout << "Value found";
        return true;
    }
    else
    {
        bool reamaining_part = Linear_Search(array + 1, size - 1, key);
        return reamaining_part;
    }
}

bool Binary_Search(int array[], int start, int end, int key)
{
    // Base Case

    // Element not found

    if (start > end)
    {
        return false;
    }

    int mid = start + (end - start) / 2;

    // Element Found
    if (array[mid] == key)
    {
        return true;
    }

    // Check condition and call accrodingly

    if (array[mid] < key)
    {
        return Binary_Search(array, mid + 1, end, key);
    }

    else
    {
        return Binary_Search(array, start, mid - 1, key);
    }
}
int main()
{
    // int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = 10;
    // Is_Sorted(array, size);

    // if (Is_Sorted(array, size))
    // {
    //     cout << "Array is Sorted";
    // }
    // else
    // {
    //     cout << "Array is not sorted";
    // }

    // Print sum of array

    // int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = 10;
    // int ans = Sum_Of_Array(array, size);
    // cout << "The sum of array is  : " << ans << endl;

    // Linear Search using recursion

    // int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = 10;
    // int key = 7;
    // int ans = Linear_Search(array, size, key);
    // cout << " Result = " << ans << endl;

    // Binary Search using recursion

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int start = 0, end = size, key = 4;
    cout << "Result  : " << Binary_Search(array, start, end, key) << endl;
}