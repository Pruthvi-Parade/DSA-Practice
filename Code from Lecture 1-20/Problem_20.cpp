// Book Allocation Problem
#include <bits/stdc++.h>
using namespace std;
bool Is_Possible(int Book_Pages[], int Books, int Students, int mid)
{
    int Student_Count = 1;
    int page_sum = 0;

    for (int i = 0; i < 4; i++)
    {
        if (Book_Pages[i] + page_sum <= mid)
        {
            page_sum += Book_Pages[i];
        }
        else
        {
            Student_Count++;
            if (Student_Count > Students || Book_Pages[i] > mid)
            {
                return false;
            }
            page_sum = Book_Pages[i];
        }
    }
    return true;
}
int Allocate_Books(int Book_Pages[], int Books, int Students)
{
    int start = 0;
    int end = 0;
    for (int i = 0; i < 4; i++)
    {
        end += Book_Pages[i];
    }
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (Is_Possible(Book_Pages, Books, Students, mid))
        {
            ans = mid;
            end = mid - 1;
        }

        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return mid;
}

int main()
{
    int Book_Pages[5] = {10, 20, 30, 40};
    int Number_Of_Students = 2;
    int Number_Of_Books = 4;

    int answer = Allocate_Books(Book_Pages, Number_Of_Books, Number_Of_Students);
    printf("The max value is  %d", answer);
}