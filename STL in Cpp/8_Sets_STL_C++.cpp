// Here we know that set stores all unique numbers
#include <iostream>
#include <set>

using namespace std;
int main()
{

    set<int> Set;

    Set.insert(1);
    Set.insert(2);
    Set.insert(3);
    Set.insert(4);
    Set.insert(4);
    Set.insert(3);
    Set.insert(2);
    cout << "Before Erase" << endl;
    for (int i : Set)
    {
        cout << i << endl;
    }

    Set.erase(Set.begin());

    cout << "After Erase" << endl;

    for (int i : Set)
    {
        cout << i << endl;
    }

    // Check Presence

    cout << "Present or Not : " << Set.count(4) << endl;

    set<int>::iterator itr = set.find(4);

    for (auto it = itr; it != set.end(); it++)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
