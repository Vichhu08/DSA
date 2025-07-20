
class Solution {
  public:
    vector<int> common_digits(vector<int> nums) {
        // Code here
        set <int> dig;
        for (int num : nums){
            while( num > 0){
                dig.insert(num%10);
                num /= 10;
            }
        
        }
        
        vector<int> result(dig.begin(), dig.end());
        return result;
    }
};