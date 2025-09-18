class Solution {
  public:
    void quickSort(vector<int>& nums, int left, int right) {
        // code here
    if(left < right){
        int pvt = partition(nums, left, right);

        quickSort(nums, left, pvt - 1);
        quickSort(nums, pvt + 1, right);
    }
    }

  public:
    int partition(vector<int>& nums, int left, int right) {
        
    int pivot = nums[right];// we can change the pivot element according but the code differs slitly...
    int i = left - 1;

    for(int j = left; j < right; j++){
        if(nums[j] <= pivot){
            i += 1;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i+1], nums[right]);
    return i + 1;
      
    }
};