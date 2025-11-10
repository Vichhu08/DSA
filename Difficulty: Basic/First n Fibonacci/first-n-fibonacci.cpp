// User function template for C++

class Solution {
  public:
    // Function to return list containing first n fibonacci numbers.
    vector<int> fibonacciNumbers(int n) {
        
        // code here
        vector<int> fib;
        if(n == 1) {
            fib.push_back(0);
    
        }
        
        else{
            int seclast = 0;
            int last = 1;
            fib.push_back(0);
            fib.push_back(1);
            int cur;
            for(int i  = 2; i < n; i++){
                cur = seclast + last ;
                seclast = last;
                last = cur ;
                
                fib.push_back(cur);
            }
            
        }
        return fib;
        
    }
};