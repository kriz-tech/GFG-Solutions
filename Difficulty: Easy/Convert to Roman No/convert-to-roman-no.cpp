class Solution {
  public:
    string convertToRoman(int num) {
        // code here
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        
        string res = "";
        
        for(int i = 0; i < 13; i++){
            while(num >= values[i]){
                res += sym[i];
                num -= values[i];
            }
        }
        return res;
    }
};