#include <bits/stdc++.h>
using namespace std;

int Partition(int array[], int start, int end)
{

    int pivot = array[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (array[i] <= pivot)
        {
            count++;
        }
    }

    // for (int i = 0; i < end; i++)
    // {
    //     cout << array[i] << " ";
    // }
    // cout << "\n";

    int pivot_index = start + count;
    cout << "Pivot : " << pivot << " Swaped element : " << array[pivot_index] << " At index : " << pivot_index << "\n";

    swap(array[pivot_index], array[start]);

    // Lets sort The left and the right part

    int i = start;
    int j = end;

    while (i < pivot_index && j > pivot_index)
    {
        while (array[i] <= array[pivot_index])
        {
            i++;
        }

        while (array[j] >= array[pivot_index])
        {
            j--;
        }

        if (i < pivot_index && j > pivot_index)
        {
            swap(array[i++], array[j--]);
        }
    }

    return pivot_index;
}
void Quick_Sort_Algo(int array[], int start, int end)
{
    // Base Case
    if (start >= end)
    {
        return;
    }

    // Creating a pivot_index element

    int pivot_index = Partition(array, start, end);

    // Recursive calls

    // Left part of the pivot_index element (elements smaller than pivot_index)

    Quick_Sort_Algo(array, start, pivot_index - 1);

    // Right part of the pivot_index element (elements larger than pivot_index)

    Quick_Sort_Algo(array, pivot_index + 1, end);
}

int main()
{
    int array[10] = {2, 4, 1, 6, 9, 9, 9, 9, 9, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int start = 0, end = size - 1;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";

    Quick_Sort_Algo(array, start, end);

    cout << "Sorted array : "
         << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}