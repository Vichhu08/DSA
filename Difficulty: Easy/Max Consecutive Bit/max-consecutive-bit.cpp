#include<bits/stdc++.h>
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int maxi = 0, cnt = 1;
        for (int i = 1; i < arr.size(); i++){
            if (arr[i] == arr[i-1]){
                cnt += 1;
            }
            
            else {
                maxi = max(cnt, maxi);
                cnt = 1;
            }
        }
        return max(maxi,cnt);
        
    }
};