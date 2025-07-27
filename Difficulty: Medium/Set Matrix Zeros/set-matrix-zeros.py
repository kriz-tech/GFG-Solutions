class Solution:
    def setMatrixZeroes(self, mat):
        # code here
        idx_row = set()
        idx_col = set()
        
        m = len(mat)
        n = len(mat[0])
        
        
        for i in range(m):
            for j in range(n):
                if mat[i][j] == 0:
                    idx_row.add(i)
                    idx_col.add(j)
                    
        for i in range(m):
            for j in range(n):
                if i in idx_row or j in idx_col:
                    mat[i][j] = 0
        
        return mat
        