
class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int max_sum = INT_MIN;
        int n = arr.size();
        
        for(int i = 0; i < n - 1; i++) {
            int a = arr[i], b = arr[i + 1];
            max_sum = max(max_sum, a + b);
        }

        return max_sum;
    }
};