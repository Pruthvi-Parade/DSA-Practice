// Aggressive Cows
#include <bits/stdc++.h>
using namespace std;
int Is_Possible(int Array_for_Cows[], int Number_Of_Cows, int Mid)
{
    int Cow_Count = 1;
    int lastPos = Array_for_Cows[0];

    for (int i = 0; i < 5; i++)
    {
        if (Array_for_Cows[i] - lastPos >= Mid)
        {
            Cow_Count++;
            if (Cow_Count == Number_Of_Cows)
            {
                return true;
            }
            lastPos = Array_for_Cows[i];
        }
    }
    return false;
}
int Aggressive_Cows(int Array_for_Cows[], int Number_Of_Cows)
{
    int start = 0;
    int maxi = -1;

    for (int i = 0; i < 5; i++)
    {
        maxi = max(maxi, Array_for_Cows[i]);
    }

    int end = maxi;
    int answer = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (Is_Possible(Array_for_Cows, Number_Of_Cows, mid))
        {
            answer = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return mid;
}
int main()
{
    int Array_for_Cows[10] = {1, 2, 3, 4, 6};
    int Number_of_Cows = 2;

    int Answer = Aggressive_Cows(Array_for_Cows, Number_of_Cows);
    printf("The largest minimum distance possible is  : %d", Answer);
}
