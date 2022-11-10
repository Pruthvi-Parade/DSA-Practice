#include"bits/stdc++.h"
#include <cmath>

using namespace std;
int main(){
    
    int array[4][3] = {0}, i = 0, sum = 0;
    cout << "Enter the second col : ";

    for (int i = 0; i < 4; i++)
    {
        cin >> array[i][1];
        sum = sum + array[i][1];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > 0 && j != 1)
            {
                // cout << "value of i = " << i << " value of j = " << j << endl;
                array[i][j] = array[i][1] * array[i][1];
                if(j == 0){ 
                    cout << sum * array[i][j] << "\n";
                }
            }
        }
    }

    cout << "The array is : \n";
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }    
}