class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int temp = n, res = 0;
        
        while ( temp > 0 ){
            res = (temp%10) + (res *10);
            temp /= 10;
        }
        
        if( res == n) return 1;
        else return 0;
    }
};