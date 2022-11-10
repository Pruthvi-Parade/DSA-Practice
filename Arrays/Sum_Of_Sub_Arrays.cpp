#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout
        << "Enter Array Size : ";
    cin >> n;

    int array[n];
    cout << "Enter Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            // cout << array[j] << "\t";
            sum += array[j];
            cout << "\nIt all adds up to : " << sum;
        }
        }
}