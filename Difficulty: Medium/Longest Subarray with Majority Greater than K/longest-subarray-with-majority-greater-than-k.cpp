class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
    int n = arr.size();
    vector<int> temp(n);

    // Transform the array: +1 if > k, else -1
    for (int i = 0; i < n; ++i) {
        temp[i] = (arr[i] > k) ? 1 : -1;
    }

    unordered_map<int, int> first_occurrence;
    int prefix_sum = 0, max_len = 0;

    for (int i = 0; i < n; ++i) {
        prefix_sum += temp[i];

        if (prefix_sum > 0) {
            max_len = i + 1;  // Entire subarray from 0 to i is valid
        } else {
            // Check if (prefix_sum - 1) has been seen before
            if (first_occurrence.count(prefix_sum - 1)) {
                max_len = max(max_len, i - first_occurrence[prefix_sum - 1]);
            }
        }

        // Record first occurrence of current prefix_sum
        if (!first_occurrence.count(prefix_sum)) {
            first_occurrence[prefix_sum] = i;
        }
    }

    return max_len;
    }
};