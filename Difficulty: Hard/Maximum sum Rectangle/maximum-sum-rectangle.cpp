class Solution {
  public:
    int maxRectSum(vector<vector<int>> &mat) {
        // code here
        int rows = mat.size();
        int cols = mat[0].size();
        int res_max = INT_MIN;
        
        for(int top = 0; top < rows; top++){
            vector<int> temp(cols, 0);
            
            for(int bottom = top; bottom < rows; bottom++){
                for(int col = 0; col < cols; col++){
                    temp[col] += mat[bottom][col];
                }
            
            int curr_sum = temp[0], max_sum = temp[0];
            
            for(int i = 1; i < cols; i++){
                curr_sum = max(temp[i], curr_sum + temp[i]);
                max_sum = max(max_sum, curr_sum);
                }
            res_max = max(max_sum, res_max);
             }
        }
        return res_max;
    }
};
