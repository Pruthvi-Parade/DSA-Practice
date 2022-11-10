#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter the value N : ";
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            cout << "The Value of i is " << i << endl;
            sum += i;
        }
        i++;
    }
    cout << "The value of sum :- " << sum << "\n";
}