class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int, int>prefix_sum;
        int curr = 0, max_len = 0;

        for(int i = 0; i < arr.size(); i++){
          curr += arr[i];
          if(curr == 0) max_len = i + 1;

          if(prefix_sum.find(curr) != prefix_sum.end())
            max_len = max(max_len, i - prefix_sum[curr]);
          else
            prefix_sum[curr] = i;
        }
        return max_len;
    }
};