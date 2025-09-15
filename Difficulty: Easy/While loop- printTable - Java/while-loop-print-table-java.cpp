class Solution {
  public:
    void calculateMultiples(int n) {
        // code here
        int m = n * 10;
        while(m > 0){
            cout << m << " " ;
            m -= n;
        }
    }
};