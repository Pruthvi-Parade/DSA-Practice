#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter the value of X : ";
    cin >> x;
    if (islower(x))
        cout << x << "\nIs lower\n";

    else if (isupper(x))
        cout << x << "\nIs Upper\n";

    int y;
    cout << "Enter the value of y : ";
    cin >> y;
    if (y > 0 || y < 0 || y == 0)
        cout << y << "\nIs a Number";
}