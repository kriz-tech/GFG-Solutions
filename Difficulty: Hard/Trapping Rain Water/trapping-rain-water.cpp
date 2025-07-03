class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int left = 0, right = n - 1, rmax = 0, lmax = 0;
        int res = 0;
        
        while(left < right)
        {
            if(arr[left] < arr[right])
            {
                if(lmax < arr[left]) lmax = arr[left];
                else res += lmax - arr[left];
                left++;
            }
            else
            {
                if(rmax < arr[right]) rmax = arr[right];
                else res += rmax - arr[right];
                right--;
            }
        }
        return res;
    }
};