// To learn Basics of STL in C++
// Vectors are a similar to array the diffrence is when the vector reaches its capacity it doubles its size (creates another vector of double size copies the previous elements and dumps the previous array i.e half of the vector is empty)
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector;

    cout << "The initial capacity is : " << vector.capacity() << endl;

    vector.push_back(1);
    cout << "The capacity is : " << vector.capacity() << endl;

    vector.push_back(2);
    cout << "The capacity is : " << vector.capacity() << endl;

    vector.push_back(3);
    cout << "The capacity is : " << vector.capacity() << endl;

    cout << "To check element at index : " << vector.at(2) << endl;

    cout << "To check the first element : " << vector.front() << endl;

    cout << "To check the last element : " << vector.back() << endl;

    for (int i : vector)
    {
        cout << vector[i] << " ";
    }

    vector.pop_back();

    cout << "\n";
    for (int i : vector)
    {
        cout << vector[i] << " ";
    }

    // pop removes the last position

    // vector<int> vector_2[5, 1];
    // for (int i : vector_2)
    // {
    //     cout << vector_2[i] << endl;
    // }

    // vector<int> vector_3(vector_2);
    // for (int i : vector_3)
    // {
    //     cout << vector_2[i] << endl;
    // }

    return 0;
}