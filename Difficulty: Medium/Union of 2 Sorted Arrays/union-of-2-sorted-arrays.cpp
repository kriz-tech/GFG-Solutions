class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int m = a.size(), n = b.size();
        int i = 0, j = 0;
        vector<int>res;
        
        while(i < m && j < n){
            if(a[i] < b[j]){
                if(res.empty() || res.back() != a[i]) res.push_back(a[i]);
                i += 1;
            }
            else if(a[i] > b[j]){
                if(res.empty() || res.back() != b[j]) res.push_back(b[j]);
                j += 1;
            }
            else{
                if(res.empty() || res.back() != a[i]) res.push_back(a[i]);
                i += 1;
                j += 1;
            }
        }
        while(i < m){
            if(res.empty() || res.back() != a[i]) res.push_back(a[i]);
            i += 1;
        }
        while(j < n){
            if(res.empty() || res.back() != b[j]) res.push_back(b[j]);
            j += 1;
        }
        return res;
    }
};