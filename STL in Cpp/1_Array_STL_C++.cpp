// To learn Basics of STL in C++
#include <bits/stdc++.h>
#include <array>

using namespace std;

int main()
{
    int basic[4] = {1, 2, 3, 4};

    array<int, 4> array = {1, 2, 3, 4};

    int size = array.size();
    for (int i = 0; i < size; i++)
    {
        cout << "Element = " << array[i] << endl;
    }

    cout << "Element at will position : " << array.at(3) << endl;
    cout << "Element at front : " << array.front() << endl;
    cout << "Element at back : " << array.back() << endl;
    cout << "Array empty or not : " << array.empty() << endl;
    return 0;
}