

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> res;
        int n = arr.size();
        
        int max_right = arr[n - 1];
        
        res.push_back(max_right);
        
        for(int i = n - 2; i >= 0; i--)
        {
            if(arr[i] >= max_right){
                max_right = arr[i];
                res.push_back(max_right);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};