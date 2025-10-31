class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int el, cnt = 0;
        for (int i = 0; i < arr.size();i++){
            if (cnt == 0){
                el = arr[i];
                cnt = 1;
            }
            
            else if(arr[i] == el) cnt++;
            
            else cnt--;
        }
        
        int cnt1 = 0;
        for(int i = 0; i < arr.size(); i++){
            if ( arr[i] == el) cnt1++;
        }
        if (cnt1 > (arr.size() / 2 )) return el;
        
        return -1;
        
        
    }
};