class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
    int n = arr.size();
    vector<int> res(n, -1);
    unordered_map<int, int> freq;

    for (int val : arr) {
        freq[val]++;
    }

    stack<int> s;

    for (int i = n - 1; i >= 0; --i) {
        
        while (!s.empty() && freq[arr[s.top()]] <= freq[arr[i]]) {
            s.pop();
        }

        if (!s.empty()) {
            res[i] = arr[s.top()];
        }

        s.push(i);
    }

    return res;
    }
};
