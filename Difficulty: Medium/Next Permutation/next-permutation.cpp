#include <bits/stdc++.h>
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
        int index = -1;
        for (int i = n-1; i > 0; i--){
            if ( arr[i-1] < arr[i] ){
                index = i-1;
                break;
            }
        }
        if( index >= 0){
            for(int i = n-1; i > index; i--){
                if(arr[i] > arr[index]){
                    swap(arr[index], arr[i]);
                    break;
                }
            }
            
            reverse( arr.begin() + index + 1, arr.end());
        }
        
        else{
            reverse(arr.begin(), arr.end());
        }
        
    }
};