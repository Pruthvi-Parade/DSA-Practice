#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    // Creation of Stack
    stack<int> stk;

    // Push an element in stack
    stk.push(10);
    stk.push(20);
    
    // Remove an element
    stk.pop();

    cout << "Current top element is : " << stk.top() << endl;

    if(stk.empty()){
        cout << "The stack is empty : " << endl;
        }
    else{
        cout << "The stack is not empty : " << stk.size() << endl;
        }

    return 0;
}