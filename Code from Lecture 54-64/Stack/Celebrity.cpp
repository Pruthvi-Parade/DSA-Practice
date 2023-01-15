// GFG
#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    private:
        bool happens_to_know(int a, int b, vector<vector<int> >& M, int n){
            if( M[a][b] == 1){
                return true;
            }
            else{
                return false;
            }
        }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> stack;
        
        for (int i = 0; i < n; i++ ){
            stack.push(i);
        }
        
        while( stack.size() > 1){
            
            int a = stack.top();
            stack.pop();
            
            int b = stack.top();
            stack.pop();
            
            if (happens_to_know(a,b,M,n)){
                stack.push(b);
            }
            else {
                stack.push(a);
            }
        }
        int possible_celebrity = stack.top();
        
        bool rowCheck = false;
        int zeroCount = 0;
        
        for(int i = 0; i < n; i++){
            if ( M[possible_celebrity][i] == 0){
                zeroCount++;
            }
        }
        if( zeroCount == n ){
            rowCheck = true;
        }
        
        bool colCheck = false;
        int oneCount = 0;
        
        for(int i = 0; i < n; i++){
            if ( M[i][possible_celebrity] == 1){
                oneCount++;
            }
        }
        if( oneCount == n-1 ){
            colCheck = true;
        }
        
        if(rowCheck == true && colCheck == true ){
            return possible_celebrity;
        }
        else{
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends