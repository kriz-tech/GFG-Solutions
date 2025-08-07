class Solution:
    def time_to_sec(self, t):
        h, m, s = map(int, t.split(":"))
        return h  * 3600 + m * 60 + s
    
    def minDifference(self, arr):
        # code here
        times = sorted(self.time_to_sec(t) for t in arr)
        res = float('inf')
        
        for i in range(1, len(times)):
            diff = times[i] - times[i - 1]
            res = min(res, diff)
        
        wrap_around = 86400 - times[-1] + times[0]
        res = min(res, wrap_around)
        
        return res
        
