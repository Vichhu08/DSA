class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long int n = (arr.size()) + 1;
        long int sumofn = (n*(n+1))/2;
        long int sum = 0;
        for(auto i: arr){
            sum = i + sum;
        }
        return (sumofn-sum);
        
    }
};