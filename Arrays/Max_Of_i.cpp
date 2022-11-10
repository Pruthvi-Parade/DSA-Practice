#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter Array Size : ";
    cin >> n;

    int array[n];
    cout << "Enter Array Elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int mx = -100;
    for (i = 0; i < n; i++)
    {
        mx = max(mx, array[i]);
        cout << mx;
    }
}