import math
from itertools import product

class Solution:
    @staticmethod
    def lcm(a, b):
        return a * b // math.gcd(a, b)
        
    def lcmTriplets(self, n):
        #code here
        nums = [n, n - 1, n - 2, n - 3, n - 4]
        nums = [x for x in nums if x > 0]
        
        max_lcm = 0
        
        for a, b, c in product(nums, repeat = 3):
            current = self.lcm(a, self.lcm(b, c))
            
            max_lcm = max(max_lcm, current)
            
        return max_lcm