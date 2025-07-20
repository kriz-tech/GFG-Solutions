class Solution {
  public:
    int countValid(int n, vector<int>& arr) {
        // code here
    unordered_set<char> forbidden;
    for (int d : arr) {
        forbidden.insert(d + '0');
    }

    // Build allowed digits
    vector<char> allowed;
    for (char d = '0'; d <= '9'; ++d) {
        if (!forbidden.count(d)) {
            allowed.push_back(d);
        }
    }

    // If no allowed digits left, can't build any number
    if (allowed.empty())
        return 0;

    // Count how many n-digit numbers contain NO digit from arr
    auto countWithoutForbidden = [&]() -> int {
        int k = allowed.size();
        int count = 0;
        if (n == 1) {
            for (char d : allowed) {
                if (d != '0')
                    count++;
            }
            return count;
        } else {
            for (char d : allowed) {
                if (d == '0') continue;
                count += pow(k, n - 1);
            }
            return count;
        }
    };

    // Total n-digit numbers
    int total = (n == 1) ? 9 : 9 * pow(10, n - 1);

    return total - countWithoutForbidden();
    }
};
