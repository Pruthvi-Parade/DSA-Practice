#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    string str = "Hello World!!!";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }
    
    string Result  = "";
    while (!s.empty())
    {
        Result.push_back(s.top());
        s.pop();
    }
    cout << "The reversed string is : " << Result << endl;
}