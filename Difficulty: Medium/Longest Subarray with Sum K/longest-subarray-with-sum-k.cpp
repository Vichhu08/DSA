class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int sum = 0, len = 0;
        map<int,int> mpp;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
             
            if(sum == k){
                len = i+1;
            }
            int rem = sum - k;
            if( mpp.find(rem) != mpp.end()) {
                len = max(len, (i - mpp[rem])) ;
            }
             
            if(mpp.find(sum) == mpp.end()) {
                mpp[sum] = i;
            }

        }
        return len;
    }
};