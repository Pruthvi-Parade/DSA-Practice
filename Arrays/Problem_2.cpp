#include <iostream>
using namespace std;
int Find(int x, int n, int array[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (array[i] == x)
            return i;
    }
    return -1;
}
int main()
{
    int n, i, x;
    cout << "Enter Array Size : ";
    cin >> n;

    int array[n];
    cout << "Enter Array Elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the element you want to search : ";
    cin >> x;
    cout << Find(x, n, array) << " Index";
}