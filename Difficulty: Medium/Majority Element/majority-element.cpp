class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        unordered_map<int, int>res;
        
        for(int num : arr)
        {
            res[num]++;
            if(res[num] > n/2) return num;
        }
        return -1;
    }
};