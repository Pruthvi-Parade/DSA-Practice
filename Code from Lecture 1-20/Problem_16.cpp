// Binary Search                   Time Complexcity O(Log n)
#include "bits/stdc++.h"
using namespace std;
int Binary_Search(int array[], int key)
{
    int start = 0;
    int end = 10 - 1;
    int mid = start + (end - start) / 2; // Value of Int is 2 to power of 31 - 1 so if both Start & End are at max it will go out of range.

    while (start <= end)
    {
        if (array[mid] == key)
            return mid;

        else if (array[mid] < key)
            start = mid + 1;

        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // You can change the array I am a bit lazy
    int key = 1;                                 // Keep Changing the value
    int ans;

    ans = Binary_Search(array, key);

    printf("Value found %d", ans);
}