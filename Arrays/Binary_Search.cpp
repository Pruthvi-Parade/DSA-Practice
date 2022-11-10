#include <iostream>
using namespace std;
int Binary_Search(int n, int array[], int key)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        counter++;
    }

    int temp = 0, i;
    for (i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }

    int start = 0, end = n, mid;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, i, key;
    cout << "Enter Array Size : ";
    cin >> n;

    int array[n];
    cout << "Enter Array Elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the element you want to search : ";
    cin >> key;
    cout << "\nFound at index: " << Binary_Search(n, array, key);
}