#include "bits/stdc++.h"
using namespace std;
int main()
{
    int count;

    cout << "Enter the number of elements in the array : ";
    cin >> count;

    int Array[count];

    for (int i = 0; i < count; i++)
    {
        cin >> Array[i];
    }
    int answer = 2;
    int previous_Common_Diffrence = Array[1] - Array[0];
    int current = 2;
    int j = 2;

    while (j < count)
    {
        if (previous_Common_Diffrence == Array[j] - Array[j - 1])
        {
            current++;
        }
        else
        {
            previous_Common_Diffrence = Array[j] - Array[j - 1];
            current = 2;
        }
        answer = max(answer, current);
        j++;
    }

    cout << "The longest Arithmetic Sub Array : " << answer;
}