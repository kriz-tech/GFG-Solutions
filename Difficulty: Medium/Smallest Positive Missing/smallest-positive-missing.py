class Solution:
    def missingNumber(self, arr):
        # code here
        s = set(x for x in arr if x > 0)
        
        i = 1
        while True:
            if i not in s:
                return i
            i += 1