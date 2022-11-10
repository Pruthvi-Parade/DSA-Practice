// This Code has
// Revese an array
// Merge 2 sorted arrays
// Move Zeros

#include <bits/stdc++.h>
#include <array>

using namespace std;

int main()
{
    array<int, 5> array;
    int count = array.size();
    int element;

    // cout << "How many numbers : ";
    // cin >> count;

    cout << "Enter the array elements : ";

    for (int i = 0; i < count; i++)
    {
        cin >> element;
        array[i] = element;
    }

    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";

    int start = 0;
    int end = array.size() - 1;

    while (start != end || start > end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
    cout << "\n";

    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
    return 1;
}

// Merge two sorted arrays

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int index = m;

    for (int i = 0; index < m + n; i++)
    {
        nums1[index] = nums2[i];
        index++;
    }

    sort(nums1.begin(), nums1.end());
}

// Move Zeros

void moveZeroes(vector<int> &nums)
{

    int non_zero = 0;

    for (int zero_value = 0; zero_value < nums.size(); zero_value++)
    {
        if (nums[zero_value] != 0)
        {
            swap(nums[non_zero], nums[zero_value]);
            non_zero++;
        }
    }
}
