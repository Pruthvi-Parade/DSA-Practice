#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {

        sort( nums.begin(), nums.end() ); // Sort for easire search

        if ( nums.size() < 3) // If less than 3 triplet cannot be formed
            return {};

        if ( nums[0] > 0 ) // If the 1st element is +ve sum cannot be 0
            return {};

        vector<vector<int>> triplets;
        for ( int i = 0; i < nums.size(); ++i ){
            
            if ( nums[i] > 0 ) // If the element is +ve sum cannot be 0
                break;
            
            if ( i > 0 && nums[i] == nums[ i - 1 ]) // NO repetition 
                continue;

            int sum = 0, lower = i + 1, higher = nums.size() - 1; // Implement binary search 

            while ( lower < higher ){
               
                sum = nums[i] + nums[lower] + nums[higher];
                
                if( sum < 0 )
                    lower++;
                else if ( sum > 0 )
                    higher--;
                else{       // This ultimatly means sum = 0
                    
                    triplets.push_back({nums[i], nums[lower], nums[higher]});

                    int lastLower = nums[lower], lastHigher = nums[higher];

                    while ( lower < higher && nums[lower] == lastLower)
                        lower++;

                    while ( lower < higher && nums[higher] == lastHigher )
                        higher--;                       
                }
            } 
        }

        return triplets;
    }
int main(){
    vector<int> array[10];
    for (int i = 0; i < array->size(); i++)
    {
        int num;
        cout << "Enter num : ";
        cin >> num;
        array.push_back(num);
    }
    threeSum(array);
}