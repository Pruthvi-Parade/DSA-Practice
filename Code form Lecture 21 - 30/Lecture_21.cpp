// // Question Links:
// - Rotate arrays:https: //leetcode.com/problems/rotate-...

// void rotate(vector<int> &vector, int k)
// {

//     vector<int> Array_2(vector.size());

//     for (int i = 0; i < vector.size(); i++)
//     {
//         Array_2[(i + k) % vector.size()] = vector[i];
//     }

//     vector = Array_2;
// }

//           -Check if rotated and sorted array:
//           https: //leetcode.com/problems/check-i...

// #include <bits/stdc++.h>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> vector;
//     int count = 5, element;
//     cout << "Enter vector elements : ";
//     for (int i = 0; i < count; i++)
//     {
//         cin >> element;
//         vector.push_back(element);
//     }
//     for (int i : vector)
//     {
//         cout << i << " ";
//     }
//     int flag = 0;

//     for (int i = 1; i < vector.size(); i++)
//     {
//         if (vector[i - 1] > vector[i])
//         {
//             flag++;
//             cout << "Flag value is : " << flag << endl;
//         }
//     }
//     cout << "last element : " << vector[vector.size() - 1] << endl;
//     if (vector[vector.size() - 1] > vector[0])
//     {
//         flag++;
//         cout << "Flag value is (in final if) : " << flag << endl;
//     }

//     cout << "Flag value is : " << flag << endl;
//     bool answer = flag <= 1;

//     cout << "The result of array is  : " << answer << endl;
// }

//           Add arrays:
//           https: //bit.ly/3DXfsDZ

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int converter(vector<int> vector)
{
    int number = vector[0] * 10;

    for (int i = 1; i < 3; i++)
    {
        number = number + vector[i];
        cout << "value : " << number << endl;
        number = number * 10;
    }
    return number / 10;
}

// int accept(vector<int> vector)
// {
//     int element = 0;

//     cout << "Enter elements : ";
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> element;
//         vector.push_back(element);
//     }
//     return vector;
// }

void Answer(int result)
{
    vector<int> vector;
    int i = 0, n = result, remainder, rev = 0;
    cout << "Final answer : " << n << "\n";
    while (n != 0)
    {
        remainder = n % 10;
        vector[i] = remainder;
        rev = rev * 10 + remainder;
        n /= 10;
        cout << vector[i] << ", ";
        i++;
    }
}

int main()
{

    vector<int> vector_1 = {7, 2, 3};

    vector<int> vector_2 = {1, 2, 3};

    int value_1 = converter(vector_1);

    cout << "The value of first array : " << value_1 << endl;

    int value_2 = converter(vector_2);

    cout << "The value of second array : " << value_2 << endl;

    int result = value_1 + value_2;

    cout << "Final Value : " << result << endl;

    Answer(result);
}
{
