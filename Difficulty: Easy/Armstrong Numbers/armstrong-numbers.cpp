// User function Template for C++
#include<math.h>
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
    int pows = 0;
    int temp = n;

    while(temp){
        temp /= 10;
        pows += 1;
    }
    
    int sol = 0;
    temp = n;

    while(temp){
        sol += pow( temp % 10, pows);
        temp /= 10;
    }

    if (sol == n) return true;
    
    return false;
}
        
    
};