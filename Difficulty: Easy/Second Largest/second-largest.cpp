class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) return -1;

        int largest = -1, secondLargest = -1;

        for (int x : arr) {
            if (x > largest) {
                secondLargest = largest;
                largest = x;
            }
            else if (x < largest && x > secondLargest) {
                secondLargest = x;
            }
        }

        return secondLargest;
    }
};
