// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int max_num = *max_element(arr.begin(), arr.end());
        int min_num = *min_element(arr.begin(), arr.end());
        
        return {min_num, max_num};
    }
};