#include <iostream>
using namespace std;
int main()
{
    int i, j, n;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        if (i >= 2)
        {
            for (j = 2; j <= i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    n = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (j = 0; j <= n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}