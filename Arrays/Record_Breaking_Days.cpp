#include "bits/stdc++.h"
using namespace std;
int main()
{
    int count;
    cout << "Enter how many days will be the park open : ";
    cin >> count;

    int _Array[count];
    for (int i = 0; i < count; i++)
    {
        cin >> _Array[i];
    }

    int mx = -1, ans = 0;

    for (int i = 0; i < count; i++)
    {
        if ((_Array[i] > mx) && (_Array[i + 1] < _Array[i]))
        {
            ans++;
        }
        mx = max(mx, _Array[i]);
    }
    cout << "The number of Record Braking days will be : " << ans;
}