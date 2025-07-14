class Solution:
    def cuts(self, s):
        # code here
        power_of_5 = set()
        num = 1
        while True:
            binary = bin(num)[2:]
            if len(binary) > len(s):
                break
            power_of_5.add(binary)
            num *= 5

        n = len(s)
        dp = [float('inf')] * (n + 1)
        dp[0] = 0 

        for i in range(1, n + 1):
            for j in range(i):
                substring = s[j:i]
                if substring[0] != '0' and substring in power_of_5:
                    dp[i] = min(dp[i], dp[j] + 1)

        return dp[n] if dp[n] != float('inf') else -1