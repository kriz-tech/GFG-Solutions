class Solution {
  public:
    int binarysearch(vector<int> &arr, int target) {
        int res = -1;
        int n = arr.size();
        int left = 0, right = n - 1;
        
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(arr[mid] == target){
                res = mid;
                right = mid - 1;
            }
            if (target > arr[mid]) left = mid + 1;
            else right = mid - 1;
        }
        return res;
    }
};