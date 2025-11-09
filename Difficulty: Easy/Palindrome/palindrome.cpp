class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        
        int temp = n;
        int sol = 0;
        while(temp){
            int dig = (temp % 10);
            sol = (sol * 10) + dig ;
            temp /= 10;
        }
        if ( sol == n) return true ;
        else return false ;
    }
};