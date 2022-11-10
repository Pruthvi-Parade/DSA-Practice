#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    int start = 0;
    int end = 0;

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
        if (str[i] != ' ')
        {
            if (str[i] != '\0')
            {
                continue;
            }
        }

        end = i - 1;
        while (start <= end)
        {
            // cout << "start : " << str[start] << "End : " << str[end];
            swap(str[start], str[end]);
            start++;
            end--;
        }
        start = i + 1;
    }
    cout << "\n"
         << str << endl;
}
