// Revesrse A String

// #include <string>
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
//     void reverseString(vector<char> &s)
//     {
//         int st = 0;
//         int e = s.size() - 1;

//         while (st < e)
//         {
//             swap(s[st++], s[e--]);
//         }
//     }
// };

// Valid palindrome

// #include <string>
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution
// {
// private:
//     bool valid(char ch)
//     {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//         {
//             return 1;
//         }

//         return 0;
//     }

//     char toLowerCase(char ch)
//     {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
//             return ch;
//         else
//         {
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }
//     bool checkPalindrome(string a)
//     {
//         int s = 0;
//         int e = a.length() - 1;

//         while (s <= e)
//         {
//             if (a[s] != a[e])
//             {
//                 return 0;
//             }
//             else
//             {
//                 s++;
//                 e--;
//             }
//         }
//         return 1;
//     }

// public:
//     bool isPalindrome(string s)
//     {

//         //faltu character hatado
//         string temp = "";

//         for (int j = 0; j < s.length(); j++)
//         {
//             if (valid(s[j]))
//             {
//                 temp.push_back(s[j]);
//             }
//         }

//         //lowercase me kardo
//         for (int j = 0; j < temp.length(); j++)
//         {
//             temp[j] = toLowerCase(temp[j]);
//         }

//         //check palindrome
//         return checkPalindrome(temp);
//     }
// };

//  Reverse the words in a string

// eg : The sky is blue
//    : blue is sky The

// #include <string>
// #include <iostream>
// #include <vector>

// using namespace std;
// int main()
// {
//     // Declaring string
//     string str;

//     // Taking string input using getline()
//     getline(cin, str);

//     // Displaying string
//     cout << "The initial string is : ";
//     cout << str << endl;

//     string temp;
//     // printf("%d \n", str.size());

//     int count = 0;
//     for (int i = (str.size() - 1); i >= 0; i--)
//     {
//         if (str[i] != ' ')
//         {
//             if (i != 0)
//             {
//                 count++;
//                 continue;
//             }
//         }

//         // printf("%d", count);
//         int j;
//         if (i == 0)
//         {
//             count += 1;
//             j = i;
//         }
//         else
//         {
//             j = i + 1;
//         }
//         while (count >= 0)
//         {
//             temp.push_back(str[j]);
//             j++;
//             count--;
//         }

//         if ((str[i] == ' ') && (i != 0))
//         {
//             temp.push_back(' ');
//         }
//     }

//     cout << "The Final String is : " << temp << endl;
// }

// Reverse The words in the string
//  eg : Hello I am Baymax
//  OP : olleH I ma xamyaB
#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    string str;

    // Get The string
    getline(cin, str);

    // Print what user has entered :

    cout << "\n " << str << endl;

    int start = 0;
    int end = 0;

    for (int i = 0; i <= str.size(); i++)
    {
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
            swap(str[start], str[end]);
            start++;
            end--;
        }
        start = i + 1;
    }
    cout << "\n"
         << str << endl;
}

// Find the maximum occuring character in a string
// Eg : Test
// OP : t

// #include <string>
// #include <iostream>
// #include <vector>

// using namespace std;
// int main()
// {
//     string str;

//     // Function to accept String
//     getline(cin, str);

//     // Print the string
//     cout << str << endl;

//     // Create an array of characters 0 - 25 (index) a - z.

//     int array[26] = {0};
//     int number = 0;
//     for (int i = 0; i < str.size(); i++)
//     {
//         char Ch = str[i];
//         if (Ch >= 'a' && Ch <= 'z')
//         {
//             number = Ch - 'a';
//             array[number]++;
//         }
//         else if (Ch >= 'A' && Ch <= 'Z')
//         {
//             number = Ch - 'A';
//             array[number]++;
//         }
//     }

//     // Fing the max i.e the max count at the index

//     int max = -1, ans = 0;

//     for (int i = 0; i < 26; i++)
//     {
//         if (max < array[i])
//         {
//             ans = i;
//             max = array[i];
//         }
//     }

//     cout << "The max occurance is of : " << 'a' + ans << endl;
// }

// Replace all the ' ' occurance with '@40'
//  Eg : Hello I am Baymax
//  Eg : Hello@40I@40am@40Baymax

// #include <string>
// #include <iostream>
// #include <vector>

// using namespace std;
// int main()
// {
//     string str;
//     cout << "Enter the string : ";
//     getline(cin, str);

//     string str2;
//     cout << "Enter the sub string to be replaced by ' ' : ";
//     getline(cin, str2);

//     cout << str << endl;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             str.replace(i, 1, str2);
//         }
//     }
//     cout << str << endl;
// }

// Remove The sub-string from the string
// eg : daabcbaabcbc  sub-string : abc
// output : dab

// #include <string>
// #include <iostream>
// #include <vector>

// using namespace std;
// int main()
// {
//     string str = "daabcbaabcbc";
//     string part = "abc";

//     cout << "Main string : " << str << endl;
//     cout << "Sub-string : " << part << endl;

// cout << str.find(part) << endl;
// while (str.find(part) > 0)
// int count = 0;
// while (count < 5)
// {
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == part[0])
//         {
//             if (str.compare(i, str.size(), part))
//             {
//                 cout << i << endl;
//                 str.erase(i, str.size());
//             }
//             else
//             {
//                 continue;
//             }
//         }
//     }
//     count++;
// }

// cout << str << endl;

// Alternate solution

// while (str.size() != 0 && (str.find(part) < str.size()))
// {
//     str.erase(str.find(part), part.size());
// }

// cout << str << endl;
// }

// Permutation in string

// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

//                                                                                  In other words,
//     return true if one of s1's permutations is the substring of s2.

//            Example 1 :

//     Input : s1 = "ab",
//             s2 = "eidbaooo" Output : true Explanation : s2 contains one permutation of s1("ba").Example 2 :

//     Input : s1 = "ab",
//             s2 = "eidboaoo" Output : false

// #include <string>
// #include <iostream>
// #include <vector>

// using namespace std;
// int main()
// {
//     string S1 = "ab";
//     string S2 = "eidbaooo";

// // cout << S1.find("e");
// for (int i = 0; i < S2.size(); i++)
// {
//     if (S1.find(S2[i]) == 0)
//     {
//         cout << i << endl;
//         cout << "Found";
//     }
// }

// Alternate Solution

//     // Initalizing all the alphabets with 0s
//     int array[26] = {0};

//     // Incrementing the alphabet index value present in String S1

//     for (int i = 0; i < S1.size(); i++)
//     {
//         int index = S1[i] - 'a';
//         s
//                 cout
//             << index << "\n";
//         array[index]++;
//         cout << array[index] << "\n";
//         n
//     }

//     // Creating groups of size Length of the string S1

//     for (int i = 0; i < S2.size(); i++)
//     {
//         int index = S2[i] - 'a';
//         if (array[index] >= 1)
//         {
//             int count = 0;
//             while (count < S1.size())
//             {
//                 if (array[S2[i] - 'a'] >= 1)
//                 {
//                     count++;
//                 }
//                 else
//                 {
//                     cout << "Permutation do not exist : 0";
//                 }
//             }
//             cout << "Permutaion Exists" << endl;
//             break;
//         }
//     }
// }