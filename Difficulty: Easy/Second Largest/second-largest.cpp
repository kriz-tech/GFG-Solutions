class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max_ele = -1, sec_max = -1;
        for(int i = 0; i < arr.size(); i++){
            if(max_ele < arr[i]){
                sec_max = max_ele;
                max_ele = arr[i];
            }
            else if(max_ele > arr[i] && sec_max < arr[i]){
                sec_max = arr[i];
            }
        }
        return sec_max;
    }
};