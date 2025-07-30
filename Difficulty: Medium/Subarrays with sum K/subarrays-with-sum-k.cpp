class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
    unordered_map<int, int> sumFreq;
    sumFreq[0] = 1;  // To count subarrays that start from index 0

    int curr_sum = 0, count = 0;

    for (int num : arr) {
        curr_sum += num;

        if (sumFreq.find(curr_sum - k) != sumFreq.end()) {
            count += sumFreq[curr_sum - k];
        }

        sumFreq[curr_sum]++;
    }

    return count;
    }
};