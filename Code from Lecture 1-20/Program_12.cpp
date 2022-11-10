#include <iostream>
using namespace std;
int main()
{
    int number, previous = 0, current = 1, next;
    cout << "Enter the number : ";
    cin >> number;
    cout << previous << ", " << current << ", ";
    for (int i = 2; i <= number; i++)
    {
        if (i == 0)
        {
            cout << "The ans is 0 \n";
            break;
        }
        else if (i == 1)
        {
            cout << "The ans is 1 \n";
            break;
        }

        else
        {
            next = previous + current;
            previous = current;
            current = next;
        }

        cout << next << ", ";
    }
}