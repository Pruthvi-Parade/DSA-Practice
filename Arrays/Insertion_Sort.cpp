#include <iostream>
using namespace std;
int main()
{
    int i, n, current, previous;

    cout << "Enter how many elements :-  ";
    cin >> n;
    int array[n];
    cout << "Enter the elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (i = 1; i < n; i++)
    {
        current = array[i];
        previous = i - 1;
        while (array[previous] > current && previous >= 0)
        {
            array[previous + 1] = array[previous];
            previous--;
        }
        array[previous + 1] = current;
    }

    for (i = 0; i < n; i++)
    {   
        cout << array[i] << "\t";
    }
}