#include <iostream>
using namespace std;
int main()
{
    int x, i = 2;
    cout << "Enter the number you want to check : - ";
    cin >> x;
    if (x % 2 == 0)
        cout << x << "\nIs not prime\n";
    while (i <= x / 2)
    {
        if (i % 2 == 0)

        {
            i++;
            continue;
        }

        else if (x % i == 0)
        {
            cout << "\nThe given number " << x << " is not prime ";
            // cout << i << endl;
            break;
        }

        else
            cout << x << "\nIs Prime\n";

        i++;
    }
}