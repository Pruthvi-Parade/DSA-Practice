#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElements(vector<int> array, int size){
        stack<int> stack;
        stack.push(-1);
        vector<int> answer(size);

        for (int i = size - 1; i >= 0; i--){
            int current = array[i];
            while( stack.top() != -1 && array[stack.top()] >= current)
                stack.pop();
            
            answer[i] = stack.top();
            stack.push(i);
        }
        return answer;
    }
vector<int> previousSmallerElements(vector<int> array, int size){
    stack<int> stack;
    stack.push(-1);
    vector<int> answer(size);
    for (int i = 0; i < size; i++){
        int current = array[i];
        while( stack.top() != -1 && array[stack.top()] >= current)
            stack.pop();
        
        answer[i] = stack.top();
        stack.push(i);
    }
    return answer;
} 

int largestRectangleArea( vector<int> &heights){
    int n = heights.size();

        vector<int> next(n);
        next = nextSmallerElements(heights, n);

        // for (int i; i < next.size(); i++){
        //     cout << next[i] << " ";
        // }
        // cout << "\n";
        
        vector<int> previous(n);
        previous = previousSmallerElements(heights, n);
        
        // for (int i; i < previous.size(); i++){
        //     cout << previous[i] << " ";
        // }
        // cout << "\n";
        
        int Area = INT_MIN;
        for (int i = 0; i < n; i++){
            int length = heights[i];

            if (  next[i] == -1 ){
                next[i] = n;
            }
            
            int breadth = next[i] - previous[i] - 1;
            int newArea = length * breadth;
            Area = max(Area, newArea);
        }
        return Area;
}
int main(){
    // Testcases
    vector<int> array1;
    array1.push_back(2);
    array1.push_back(1);
    array1.push_back(5);
    array1.push_back(6);
    array1.push_back(2);
    array1.push_back(3);
    // vector<int> array1 = [2,5,7,8,6,3];
    
    cout << "Area = " << largestRectangleArea(array1) << endl;
}