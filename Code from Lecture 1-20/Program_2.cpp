#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Hello\n";
    cin >> a >> b >> c;
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    if (a > b)
    {
        if (a > c)
        {
            cout << a << "Is greater than both " << b << c << endl;
        }
        else
        {
            cout << c << "Is greater than both" << a << b << endl;
        }
    }
    else
    {
        cout << b << "Is greater than both" << a << c << endl;
    }
}