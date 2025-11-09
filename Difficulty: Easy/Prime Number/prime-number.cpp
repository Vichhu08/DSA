class Solution {
  public:
    bool isPrime(int n) {
        // code here
    int br = 0;
    for (int i = 2; i*i <= n; i++){
        if(n % i == 0){
            br = 1;
            break;
        }
    }
    if (br || n == 1) return false ;
    else return true;
    
    }
};
