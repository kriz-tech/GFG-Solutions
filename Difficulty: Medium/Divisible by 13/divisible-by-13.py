class Solution:
    def divby13(self, s):
        # code here 
        remainder = 0
        for ch in s:
            digit = int(ch)
            remainder = (remainder * 10 + digit) % 13
        return remainder == 0