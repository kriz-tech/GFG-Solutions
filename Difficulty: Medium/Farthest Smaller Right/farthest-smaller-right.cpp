class Solution {
  public:
    vector<int> farMin(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>res(n, -1), right_min(n);
        right_min[n - 1] = arr[n - 1];
        
        for(int i = n - 2; i >= 0; i--){
            right_min[i] = min(right_min[i + 1], arr[i]);
        }
        
        for(int i = 0; i < n - 1; i++){
            if(right_min[i + 1] >= arr[i]) continue;
            
            int left = i + 1, right = n - 1;
            while(left <= right){
                int mid = (left + right) / 2;
                if(right_min[mid] < arr[i]){
                    res[i] = mid;
                    left = mid + 1;
                }
                else right = mid - 1;
            }
        }
        return res;
    }
};