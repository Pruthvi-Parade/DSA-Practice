#include <bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
        if ( n == 1 && trust.size() == 0)
            return 1;
        vector<int> count(n+1);
        for ( int i = 0; i < trust.size(); i++)
        {
            count[trust[i][0]]--;

            count[trust[i][1]]++;
        }

        for ( int i = 0; i < count.size(); i++){
            cout << count[i] << " ";    
        }
        
        for ( int i = 0; i < count.size(); i++){
            
            if (count[i] == n - 1)
                return i;
        }
        
        return -1;
}

int main(){
    vector<vector<int>> trust
    {
        {1, 3},
        {2, 3},
        {4, 3}
    };
    int n = 4;
    
    int ans = findJudge(n, trust);
    cout << ans;
}
