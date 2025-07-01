class Solution:
    def findSum(self, n):
        # code here
        if n == 1:
            return 1
        return n + self.findSum(n - 1)
        
