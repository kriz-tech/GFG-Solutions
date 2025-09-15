// User function Template for C++

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        vector<int> arr(2);
        arr[0] = a + 1;
        arr[1] = b + 2;
        return arr;
    }
};