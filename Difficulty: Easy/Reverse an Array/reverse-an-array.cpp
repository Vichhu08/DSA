class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        int j = n-1;
        for(int i = 0; i < n/2; i++){
            swap(arr[i], arr[j]);
            j -= 1;
        }
    }
};