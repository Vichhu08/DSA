class Solution {
  public:
    int maximumProfit(vector<int> &arr) {
        // code here
             int mini = arr[0], maxprof = 0;
     int n = arr.size();
     
    for(int i  = 1; i < n; i++){
        int cost = arr[i] - mini ;
        maxprof = max(cost, maxprof) ;
        
        mini = min(arr[i],mini);
     }
     return maxprof;
    }
};
