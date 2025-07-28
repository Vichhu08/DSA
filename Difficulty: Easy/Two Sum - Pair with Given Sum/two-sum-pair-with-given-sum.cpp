class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int left = 0, right = arr.size()-1;
        sort(arr.begin(),arr.end());
        while (left < right){
            int sum = arr[left] + arr[right]; 
            if (sum == target) return true;
            if (sum > target) right--;
            else left++;
        }
        return false;
    }
};