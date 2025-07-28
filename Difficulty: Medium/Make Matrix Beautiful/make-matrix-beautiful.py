class Solution:
    def balanceSums(self, mat):
        # code here
        n = len(mat)
        
        row_sum = [sum(row) for row in mat]
        col_sum = [sum(mat[r][c] for r in range(n)) for c in range(n)]
        
        target = max(max(row_sum), max(col_sum))
        
        total_sum = sum(row_sum)
        
        return target * n - total_sum