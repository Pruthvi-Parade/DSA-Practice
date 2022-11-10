// The painters problem
#include <bits/stdc++.h>
using namespace std;
bool Is_Possible(int Array_to_Paint[], int Painters, int Boards, int mid)
{
    int Painter_Count = 1;
    int Sum_of_Value_in_Boards = 0;

    for (int i = 0; i < 4; i++)
    {

        if (Sum_of_Value_in_Boards + Array_to_Paint[i] <= mid)
        {
            Sum_of_Value_in_Boards += Array_to_Paint[i];
        }
        else
        {
            Painter_Count++;
            if (Painter_Count > Painters || Array_to_Paint[i] > mid)
            {
                return false;
            }
            Sum_of_Value_in_Boards = Array_to_Paint[i];
        }
    }
    return true;
}

int Painter_Problem(int Array_to_Paint[], int Painters, int Boards)
{
    int start = 0;
    int end = 0;
    for (int i = 0; i < 4; i++)
    {
        end += Array_to_Paint[i];
    }
    cout << "Value of End = " << end << endl; // CHECKPOINT
    int mid = start + (end - start) / 2;
    int answer = -1;
    while (start <= end)
    {
        if (Is_Possible(Array_to_Paint, Painters, Boards, mid))
        {
            answer = mid;
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
    int Array_to_Paint[10] = {5, 10, 20, 50};

    int number_of_painter = 2;
    int number_of_Boards = 4;

    int answer = Painter_Problem(Array_to_Paint, number_of_painter, number_of_Boards);
    printf("The answer is = %d", answer);
}