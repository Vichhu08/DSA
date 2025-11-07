class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> st;
        int n = arr.size();
        if ( n == 0) return 0;
        int longest = 1;
        int cnt = 0;
        
        for (int val: arr){
            st.insert(val);
        }
        
        for(auto it : st){
            
            if( st.find(it - 1) == st.end()){
                
                cnt = 1;
                int x = it;
                while(st.find( x + 1) != st.end()){
                    cnt += 1;
                    x += 1;
                    st.erase(x);
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
        
    }
};