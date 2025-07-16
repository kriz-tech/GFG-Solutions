class Solution {
  public:
    int countNumbers(int n) {
        // Code Here
        int res = 0;
        int limit = sqrt(n);
        vector<int>prime(limit + 1);
        
        for(int i = 0; i <= limit; i++)
            prime[i] = i;
        
        for(int i = 2; i * i <= limit; i++){
            if(prime[i] == i){
                for(int j = i * i; j <= limit; j+= i)
                    if(prime[j] == j)
                        prime[j] = i;
            }
        }
        
        for(int i = 2; i <= limit; i++){
            int p = prime[i];
            int q = prime[i/prime[i]];
            
            if(p * q == i && q != 1 && p != q){
                res ++;
            }
            else if(prime[i] == i)
                if(pow(i, 8) <= n) res++;
        }
        return res;
    }
};