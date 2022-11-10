#include <iostream>
using namespace std;
int main()
{
    int n, i, counter = 1;

    cout << "Enter how many elements :-  ";
    cin >> n;
    int array[n];
    cout << "Enter the elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    while (counter < n)
    {
        for (i = 0; i < n - counter; i++)
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
    for (i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    }
}