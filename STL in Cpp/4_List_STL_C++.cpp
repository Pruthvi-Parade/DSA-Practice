// Many functions ar same as before
#include <bits/stdc++.h>
#include <list>

using namespace std;

int main()
{

    list<int> list;
    list.push_back(1);
    list.push_front(2);

    for (int i : list)
    {
        cout << i << endl;
    }

    cout << "Front : " << list.front() << endl;
    cout << "Back : " << list.back() << endl;

    cout << "Check whether it is empty : " << list.empty() << endl;

    // Erase

    cout << "Before erase : " << list.size() << endl;

    list.erase(list.begin());

    cout << "After erase : " << list.size() << endl;

    // Initialization :

    list<int> List_2(5, 100); // Won't RUN UNTIL YOU REMOVE THE PREVIOUS LIST

    for (int i : List_2)
    {
        cout << i << endl;
    }
}