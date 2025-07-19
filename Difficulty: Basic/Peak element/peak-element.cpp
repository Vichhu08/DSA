#include<bits/stdc++.h>
class Solution {
  public:
    int peakElement(vector<int> &arr) {
        
        int j = 0;
        for (int i = 0; j < arr.size(); i++){
            
            j = i+1;
            
            if(arr[j] > arr[i] && arr[j] > arr[i+2]){
                return j;
            }
            else if(j == (arr.size()-1) && arr[j] > arr[i]){
                return j;
            }
        }
        
        return 0;
        
        
    }
};