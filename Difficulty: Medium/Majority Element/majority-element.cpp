class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size();
    int count = 0, candidate = -1;

    // 1st pass: find potential candidate
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i] == candidate)
            count++;
        else
            count--;
    }

    // 2nd pass: confirm candidate
    count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == candidate)
            count++;
    }

    if(count > n / 2)
        return candidate;
    return -1;
    }
};