// Here we know that Maps store valuse in key value pairs
// The time compexity of all these functions is O(log n)
#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<int, string> map;

    // Method to insert values to maps

    map[1] = "Pruthvi";
    map[2] = "Parade";
    map[20] = "Akansha";
    map[25] = "Mittal";

    // Another Method to add

    map.insert({15, "Gusion"});

    // Ordered maps sort themselfs  according to the keys

    cout << "Before Erase" << endl;
    for (auto i : map)
    {
        cout << i.first << " " << i.second << endl;
    }

    // To find the element in the map

    cout << "Whether present or not : " << map.count(20) << endl;

    cout << "Whether present or not : " << map.count(-20) << endl;

    map.erase(20);

    cout << "After Erase" << endl;

    for (auto i : map)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it.find(5);

    for (auto i = it; i != map.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}