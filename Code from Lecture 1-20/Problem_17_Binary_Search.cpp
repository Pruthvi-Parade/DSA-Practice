// #Binary Search for first and last occurance of element which is repeating
#include "bits/stdc++.h"
using namespace std;
// Decreasing the value of end till the first value (if the array is sorted) then increasing start till end then terminate
int First_Occurance(int array[], int key)
{
    int start = 0;
    int end = 10 - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            end = mid - 1;
        }

        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return end + 1;
}
// Increasing the value of start till the last value (if the array is sorted) then decreasing end till start then terminate
int Last_Occurance(int array[], int key)
{
    int start = 0;
    int end = 10 - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            start = mid + 1;
        }

        else if (array[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return start - 1;
}

void Occurance(int array[], int key)
{
    int start = 0;
    int end = 10 - 1;
    while (start <= end)
    {
        if (array[start] != key)
        {
            start += 1;
        }

        else if (array[end] != key)
        {
            end -= 1;
        }

        else if (array[start] == key && array[end] == key)
        {
            printf("\nThe first occurance is at %d and Last Ouccrance is at %d ", start, end);
            start = end + 1;
        }
    }
}

int main()
{
    int array[15] = {1, 2, 2, 3, 3, 3, 3, 4, 5, 6, 7, 8, 9};
    int key;
    cout << "Enter the key you want to search : ";
    cin >> key;
    // Calling the function and returning the first value
    int ans = First_Occurance(array, key);
    printf("The First occurance was at : %d ", ans);
    // Calling the function and returning the last value
    ans = Last_Occurance(array, key);
    printf("The Last occurance was at : %d ", ans);

    Occurance(array, key);
}
