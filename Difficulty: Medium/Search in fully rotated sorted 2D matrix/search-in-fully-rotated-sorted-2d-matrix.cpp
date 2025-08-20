class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int m = mat.size(), n = mat[0].size();
        int l = 0, r = m * n - 1;
        
        while(l <= r){
            int mid = (l + r) / 2;
            int row = mid / n, col = mid % n;
            int mid_val = mat[row][col];
            
            if(mid_val == x) return true;
            
            int l_val = mat[l/n][l%n], h_val = mat[r/n][r%n];
            
            if(l_val <= mid_val){
                 if(l_val <= x && x < mid_val) r = mid - 1;
                 else l = mid + 1;
            }
            
            else{
                if(mid_val < x && x <= h_val) l = mid + 1;
                else r =  mid - 1;
            }

        }
        return false;
    }
};
