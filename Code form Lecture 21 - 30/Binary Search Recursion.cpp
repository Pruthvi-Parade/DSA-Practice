#include <bits/stdc++.h>
using namespace std;
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

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int start = 0, end = size, key = 4;
    cout << "Result  : " << Binary_Search(array, start, end, key) << endl;
}