class Solution:
    def reverseexponentiation(self, n):
        # code here
        m = str(n)
        reverse = int(m[::-1])
        
        return n ** reverse