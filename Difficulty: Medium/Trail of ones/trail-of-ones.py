class Solution:
    def countConsec(self, n: int) -> int:
        if n == 0:
            return 0
            
        a = [0] * (n + 1)
        b = [0] * (n + 1)
        
        a[1] = b[1] = 1
        
        for i in range(2, n + 1):
            a[i] = a[i - 1] + b[i - 1]
            b[i] = a[i - 1]
            
        total = 2 ** n
        no_consec_1 = a[n] + b[n]
        
        return total - no_consec_1