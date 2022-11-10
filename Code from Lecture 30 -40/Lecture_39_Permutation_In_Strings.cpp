#include <bits/stdc++.h>
using namespace std;
void Solve(string str, string Output, int index, vector<string> Answer)
{
    // Base case
    if (index >= str.size())
    {
        Answer.push_back(str);
        // cout << str << "  :  ";
        return;
    }

    // Recursive call

    for (int i = index; i < str.size(); i++)
    {
        swap(str[index], str[i]);
        Solve(str, Output, index + 1, Answer);
        swap(str[index], str[i]);
    }
}

void Permutations_of_a_String(string str)
{
    int index = 0;
    string Output = "";
    vector<string> Answer;

    Solve(str, Output, index, Answer);
}
int main()
{
    string str = "123";
    Permutations_of_a_String(str);
}