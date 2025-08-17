class Solution:
    def nCr(self, n, r):
        # code here
        if r > n:
            return 0
        if r == 0 or r == n:
            return 1
        
        r = min(r, n - r)
        res = 1
        
        for i in range(r):
            res *= (n - i)
            res //= (i + 1)
            
        return res