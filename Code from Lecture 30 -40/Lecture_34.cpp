#include <bits/stdc++.h>
using namespace std;
void Insertion_Sort(int *array, int size)
{
    // Base case
    if (size == 0 || size == 1)
    {
        return;
    }

    int current = array[0];
    int *previous = array - 1;

    while (previous[0] > current && previous)
    {
        previous[0 + 1] = previous[0];
        previous--;
    }
    previous[0 + 1] = current;

    Insertion_Sort(array + 1, size - 1);
}
void Selection_sort(int *array, int size)
{
    // Base case
    if (size == 0 || size == 1)
    {
        return;
    }

    for (int i = 0; i < size; i++)
    {
        if (array[0] > array[i])
        {
            swap(array[0], array[i]);
        }
    }

    Selection_sort(array + 1, size - 1);
}

void Bubble_sort(int *array, int size)
{
    // Base case
    if (size == 0 | size == 1)
    {
        return;
    }

    // Loop for sorting
    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            swap(array[i], array[i + 1]);
        }
    }

    // Recursive call
    Bubble_sort(array, size - 1);
}

int power(int a, int b)
{
    // base case
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    // Recursive call

    int ans = power(a, b / 2);

    // If the power is even this is the formula to caluculate fast
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    // If the power is odd this is the formula to caluculate fast
    else
    {
        return a * (ans * ans);
    }
}

void reverse(string &name, int i, int j)
{
    // Base case
    if (i > j)
    {
        return;
    }

    swap(name[i], name[j]);
    i++;
    j--;

    // Recursive call

    reverse(name, i, j);
}
int main()
{
    // string name = "Pruthvi";
    // int i = 0, j = name.size() - 1;
    // cout << name << endl;
    // reverse(name, i, j);
    // cout << name << endl;

    // int a, b;
    // cout << "Enter Number and power : ";
    // cin >> a >> b;

    // cout << "The answer is : " << power(a, b) << endl;

    int array[5] = {5, 4, 3, 2, 1};

    // Bubble Sort
    // Bubble_sort(array, 5);

    // Selection Sort
    // Selection_sort(array, 5);

    // Insertion Sort
    Insertion_Sort(array + 1, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
}