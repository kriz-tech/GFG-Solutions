#User function Template for python3

class Solution:
    def evenlyDivides(self, n):
        # code here
        count = 0
        for digit_char in str(n):
            digit = int(digit_char)
            if digit != 0 and n % digit == 0:
               count += 1
        return count