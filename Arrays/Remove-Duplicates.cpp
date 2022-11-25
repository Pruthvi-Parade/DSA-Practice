#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int nums[12] = {1,1,2,2,2,3,3,4,5,5,6,6};
    int fix = nums[0];
    
    for(int i=1; i<12; i++)        
	{
        if(nums[i]!=nums[i-1]) {
            cout << "num[i] = " << nums[i] << "num[i-1] = " << nums[i-1] << "num[k++] = " << nums[k] << endl;
            nums[k++] = nums[i];
        }
    }
    

    for (int i = 0; i < 12; i++)
    {
        cout << nums[i] << " ";
    }
    
}