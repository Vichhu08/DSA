class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int n = arr.size();
        int small = arr[0];
        int ssmall = INT_MAX;
        vector<int> ar;
        
        if(n < 2) return {-1};
        
        for(int i = 1; i < n; i++){
            if(arr[i] < small ){
                ssmall = small;
                small = arr[i];
            }
            
            else if (arr[i] < ssmall && arr[i] != small) ssmall = arr[i];
        
        }
        if (ssmall == INT_MAX && n > 2) {
            ar.push_back(-1);
        } 
        else{
        ar.push_back(small);
        ar.push_back(ssmall);
        }
        return ar;
    }
};