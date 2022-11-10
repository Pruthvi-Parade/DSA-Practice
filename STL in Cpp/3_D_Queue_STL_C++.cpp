#include <bits/stdc++.h>
#include <deque>

using namespace std;

int main()
{

    deque<int> deque;

    deque.push_back(1);

    cout << "This adds element from the back " << deque[0] << endl;

    deque.push_front(2);

    cout << "This adds element from the FRONT " << deque[0] << endl;

    deque.pop_back();

    cout << "This REMOVES element from the back " << deque[0] << " " << deque[1] << endl;

    // pop_front removes from front

    deque.push_back(4);
    deque.push_back(5);
    deque.push_back(6);
    deque.push_back(7);
    deque.push_back(8);

    cout << "Front : " << deque.front() << endl;
    cout << "Back : " << deque.back() << endl;

    cout << "Check whether it is empty : " << deque.empty() << endl;

    // Erase

    cout << "Before erase : " << deque.size() << endl;

    deque.erase(deque.begin(), deque.begin() + 2);

    cout << "After erase : " << deque.size() << endl;

    for (int i = 0; i < deque.size(); i++)
    {
        cout << deque[i] << endl;
    }

    deque<int> deque_2(5, 1); // Won't RUN UNTIL YOU REMOVE THE PREVIOUS Deque
}