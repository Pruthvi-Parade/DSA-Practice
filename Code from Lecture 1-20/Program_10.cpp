#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << j;
            j = j + 1;
        }
        int star = (2 * i) - 2;
        while (star)
        {
            cout << "*";
            star = star - 1;
        }
        j = j - 1;
        while (j)
        {
            cout << j;
            j = j - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}