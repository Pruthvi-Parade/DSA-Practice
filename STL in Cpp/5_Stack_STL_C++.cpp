// Implementing Stack using STL
#include <bits/stdc++.h>
#include <stack>

using namespace std;
int main()
{
    stack<string> String_stack;

    String_stack.push("Walt");
    String_stack.push("Walt'Jr");
    String_stack.push("White Family");

    cout << "To peek the top : " << String_stack.top() << endl;

    String_stack.pop();

    cout << "To peek the top : " << String_stack.top() << endl;

    cout << "To know the size of stack : " << String_stack.size() << endl;

    cout << "To know whether stack is empty or not : " << String_stack.empty() << endl;
}