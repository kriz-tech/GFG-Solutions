class Solution:
    def asciirange(self, s):
        # code here
        first_idx = {}
        last_idx = {}
        res = []
        
        for i, ch in enumerate(s):
            if ch not in first_idx:
                first_idx[ch] = i
            
            last_idx[ch] = i
            
        for ch in set(s):
            start = first_idx[ch]
            end = last_idx[ch]
            
            if start < end:
                ascii_sum = sum(ord(s[i]) for i in range(start + 1, end))
                if ascii_sum > 0:
                    res.append(ascii_sum)
                    
        return res
        