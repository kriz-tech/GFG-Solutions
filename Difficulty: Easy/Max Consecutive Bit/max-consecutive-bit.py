class Solution:
    def maxConsecBits(self, arr):
        #code here 
        ones = zeros = 0
        one_sum = zero_sum = 0
        
        for num in arr:
            if num == 1:
                ones += 1
                one_sum = max(ones, one_sum)
                zeros = 0
            else:
                zeros += 1
                zero_sum = max(zeros, zero_sum)
                ones = 0
                
        return max(one_sum, zero_sum)