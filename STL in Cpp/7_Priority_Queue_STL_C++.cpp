// Implementing Priority Queue using STL
#include <bits/stdc++.h>
#include <queue>

using namespace std;
int main()
{
    // Max Heap
    priority_queue<int> Maxi;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> Mini;

    Maxi.push(1);
    Maxi.push(2);
    Maxi.push(3);
    Maxi.push(4);
    Maxi.push(5);

    int count = Maxi.size();

    for (int i = 0; i < count; i++)
    {
        cout << Maxi.top();
        Maxi.pop();
    }
    cout << "\n"
         << "Staring Mini"
         << "\n";

    Mini.push(1);
    Mini.push(2);
    Mini.push(3);
    Mini.push(4);
    Mini.push(5);

    count = Mini.size();

    cout << "Size of Mini : " << Mini.size() << endl;
    for (int i = 0; i < count; i++)
    {
        cout << Mini.top();
        Mini.pop();
    }

    return 0;
}