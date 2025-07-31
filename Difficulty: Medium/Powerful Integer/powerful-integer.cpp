class Solution {
  public:
    int powerfulInteger(vector<vector<int>>& intervals, int k) {
        // code here
        map<int, int>freq;
        
        for(auto& interval : intervals){
            freq[interval[0]] += 1;
            freq[interval[1] + 1] -= 1;
        }
        
        int curr = 0;
        int max_power = -1;
        
        auto it = freq.begin();
        auto prev = it->first;
        
        
        for(auto& [point, delta] : freq){
            if(point != prev && curr >= k){
                max_power = point - 1;
            }
            curr += delta;
            prev = point;
        }
        return max_power;
    }
};