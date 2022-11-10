// Merge sort Using recursion
#include <bits/stdc++.h>
using namespace std;
int Inversion_Count(int array_2[], int size)
{
    int Inversion_Count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (array_2[i] > array_2[j])
            {
                Inversion_Count++;
            }
        }
    }
    return Inversion_Count;
}

void Merge(int *array, int start, int end)
{
    int mid = start + (end - start) / 2;

    // Find the length of the arrays

    int Length_of_first_Array = mid - start + 1;
    int Length_of_Second_Array = end - mid;

    // Allocate memory to store the arrays

    int *First = new int[Length_of_first_Array];
    int *Second = new int[Length_of_Second_Array];

    // Insert the values in the arrays

    // Insering in the first array

    int Main_Array_index = start;

    for (int i = 0; i < Length_of_first_Array; i++)
    {
        First[i] = array[Main_Array_index++];
    }

    // Inserting in the second array

    Main_Array_index = mid + 1;

    for (int i = 0; i < Length_of_Second_Array; i++)
    {
        Second[i] = array[Main_Array_index++];
    }

    // Merge two sorted arrays

    int index_1 = 0;
    int index_2 = 0;

    Main_Array_index = start;

    while (index_1 < Length_of_first_Array && index_2 < Length_of_Second_Array)
    {
        if (First[index_1] < Second[index_2])
        {
            array[Main_Array_index++] = First[index_1++];
        }

        else
        {
            array[Main_Array_index++] = Second[index_2++];
        }
    }

    while (index_1 < Length_of_first_Array)
    {
        array[Main_Array_index++] = First[index_1++];
    }

    while (index_2 < Length_of_Second_Array)
    {
        array[Main_Array_index++] = Second[index_2++];
    }
}

void Merge_Sort(int *array, int start, int end)
{
    // Base case
    if (start >= end)
    {
        return;
    }

    // cout << " HI ";
    int mid = start + (end - start) / 2;

    // Recursive Call

    // Left Part
    Merge_Sort(array, start, mid);

    // Right Part
    Merge_Sort(array, mid + 1, end);

    // Merge and Sort

    Merge(array, start, end);
}
int main()
{

    int array[10] = {10, 9, 8, 7, 6, -5, -14, -3, -24, -1};
    int size = 10;
    int start = 0, end = size - 1;

    Merge_Sort(array, start, end);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    // INVERSION COUNT PROBLEM

    int array_2[10] = {1, 42, 5, 3, 4, 7, 6, 12, 9, 5};

    int Length = sizeof(array_2) / sizeof(array[0]);

    cout << "Inversion count is  : " << Inversion_Count(array_2, Length) << "\n";
}