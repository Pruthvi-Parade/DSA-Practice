#include <bits/stdc++.h>
using namespace std;
void Map_With_Digits(string digits, vector<string> &Answer, string Output, int index, string Mapping[])
{
    //     Base case
    if (index >= digits.length())
    {
        // cout << "Value at return : " << Output << endl;
        Answer.push_back(Output);
        return;
    }

    //     Recursive Calls

    int number = digits[index] - '0'; // Storing index of the current digit string
    string value = Mapping[number];   // Storing the string of current index value

    //  Using loop appending the string values in Output

    for (int i = 0; i < value.length(); i++)
    {
        Output.push_back(value[i]);
        // cout << "Value at insert : " << Output << endl;
        Map_With_Digits(digits, Answer, Output, index + 1, Mapping);
        Output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{

    vector<string> Answer;
    if (digits.length() == 0)
    {
        return Answer;
    }
    string Output;
    int index = 0;
    string Mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    //         Function call

    Map_With_Digits(digits, Answer, Output, index, Mapping);

    return Answer;
}

int main()
{
    string digits = "23";
    vector<string> Answer = letterCombinations(digits);

    for (int i = 0; i < Answer.size(); i++)
    {
        cout << Answer[i] << " ";
    }
}