// This code is base on previous concepts
// Sorting methods done in one line

#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{

    vector<int> vector;

    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.push_back(5);

    for (auto i : vector)
    {
        cout << vector[i] << " ";
    }
    cout << "\n";

    // Implementing the Binary search ALGO

    cout << "Finding 5 in vector : " << binary_search(vector.begin(), vector.end(), 5) << endl; // Returns Booleen value 1 / 0

    // Lower and Upper
    cout << "Lower Bound : " << lower_bound(vector.begin(), vector.end(), 5) - vector.begin() << endl;
    cout << "Upper Bound : " << upper_bound(vector.begin(), vector.end(), 3) - vector.begin() << endl;

    // Max  /  Min

    int a = 10;
    int b = 90;

    cout << "Printing max : " << max(a, b) << endl;
    cout << "Printing min : " << min(a, b) << endl;

    // Swap

    swap(a, b);

    cout << a << " " << b << endl;

    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());

    cout << abcd << endl;

    // Rotate
    cout << "\n Before Rotate" << endl;
    for (auto i : vector)
    {
        cout << i << " ";
    }
    rotate(vector.begin(), vector.begin() + 1, vector.end());
    cout << "\n After Rotate" << endl;
    for (auto i : vector)
    {
        cout << i << " ";
    }

    // Intro sort <Base on 3 sorting tech quich heap insertion>

    sort(vector);
    for (auto i : vector)
    {
        cout << vector[i] << " " << endl;
    }

    return 0;
}