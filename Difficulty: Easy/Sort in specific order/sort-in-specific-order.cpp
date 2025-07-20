class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        vector<int> odd , even;
        for(int i: arr){
            if( i % 2 == 0) even.push_back(i);
            else odd.push_back(i);
        }
        
        sort(odd.begin(),odd.end(), greater<int>());
        sort(even.begin(),even.end());
        
        int i = 0;
        for(int num: odd )
            arr[i++] = num;
        for(int num: even)
            arr[i++] = num;
    }
};