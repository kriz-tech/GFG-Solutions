class Solution {
  public:
    void merge_sort(vector<int>& nums, int left, int mid, int right){
        int m = mid - left + 1;
        int n = right - mid;
        
        vector<int> l(m);
        vector<int> r(n);
        
        for(int i = 0; i < m; i++) l[i] = nums[left + i];
        for(int j = 0; j < n; j++) r[j] = nums[mid + j + 1];
        
        int i = 0, j = 0, k = left;
        
        while(i < m && j < n){
            if(l[i] < r[j]){
                nums[k] = l[i];
                i++;
            }
            else{
                nums[k] = r[j];
                j++;
            }
            k++;
        }
        
        while( i < m) nums[k++] = l[i++];
        while( j < n) nums[k++] = r[j++];
    }
    
    void mergeSort(vector<int>& arr, int left, int right) {
        // code here
        if(left < right){
            int mid = left + (right - left) / 2;
            
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            
            merge_sort(arr, left, mid, right);
        }
    }
};