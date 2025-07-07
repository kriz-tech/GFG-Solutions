class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &nums) {
        // code here
        int n = nums.size();
        stack<int>s;
        vector<int>res(n, -1);

        for(int i = 0; i < 2 * n; i++)
        {
            while(!s.empty() && nums[i % n] > nums[s.top()])
            {
                res[s.top()] = nums[i % n];
                s.pop();
            }
            s.push(i % n);
        }
        return res;
    }
};