// Implementing Queue using STL
#include <bits/stdc++.h>
#include <queue>

using namespace std;
int main()
{
    queue<string> String_queue;

    String_queue.push("Walt");
    String_queue.push("Walt'Jr");
    String_queue.push("White Family");

    cout << "To know the size : " << String_queue.size() << endl;

    String_queue.pop();

    cout << "To know the size : " << String_queue.size() << endl;

    String_queue.pop();
    cout << "To know the front of queue : " << String_queue.front() << endl;

    cout << "To know whether queue is empty or not : " << String_queue.empty() << endl;

    return 0;
}