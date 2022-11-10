#include "bits/stdc++.h"
using namespace std;
int main()
{
    // Palindrome

    // int n;
    // bool flag = 1;
    // cin >> n;
    // char array[n + 1];
    // cout << "Enter the array : ";
    // cin >> array;

    // for (int i = 0; i < n; i++)
    // {
    //     if (array[i] != array[n - 1 - i])
    //     {
    //         flag = false;
    //     }
    // }

    // if (flag == true)
    // {
    //     cout << "Word is palindrome";
    // }
    // else
    // {
    //     cout << "Word is not a palindrome";
    // }

    // Largest Word in Sentence
    int n;
    cin >> n;
    cin.ignore();
    char array[n + 1];
    int i = 0, count = 0, mx = 0;
    cout << "Enter the sentence : ";
    cin.getline(array, n);
    cin.ignore();
    while (array[i] != '\0')
    {
        if (array[i] == ' ' || array[i + 1] == '\0')
        {
            count = 0;
        }
        else
        {
            count++;
            if (mx < count)
            {
                mx = count;
            }
        }
        i++;
    }

    cout << "The largest word is of : " << mx << " letters";
}