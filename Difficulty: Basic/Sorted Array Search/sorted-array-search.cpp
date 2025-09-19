class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int l = 0, r = arr.size();
        while(l <= r){
            int mid = (l + r) / 2;
            if (arr[mid] == k) return true;
            else if(arr[mid] < k) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};