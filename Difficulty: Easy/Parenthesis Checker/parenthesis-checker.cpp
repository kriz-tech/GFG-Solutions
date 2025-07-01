
class Solution {
  public:
    bool isBalanced(string& k) {
        // code here
        stack<int>s;
        int count = 0;
        for(auto ch : k)
        {
            if(ch == '(' || ch == '{' || ch == '[') s.push(ch);
            else
            {
                if(s.empty()) return false;
                if(ch == ')')
                {
                    if(s.top() == '(') s.pop();
                    else return false;
                }
                if(ch == ']')
                {
                    if(s.top() == '[') s.pop();
                    else return false;
                }
                if(ch == '}')
                {
                    if(s.top() == '{') s.pop();
                    else return false;
                }
            }
        }
        if(s.empty()) return true;
        return false;
    }
};