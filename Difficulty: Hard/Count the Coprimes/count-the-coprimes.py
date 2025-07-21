from math import gcd
from collections import defaultdict

class Solution:
    
    @staticmethod
    def mobius_sieve(n):
        mu = [1] * (n + 1)
        is_prime = [True] * (n + 1)
        for i in range(2, n + 1):
            if is_prime[i]:
                for j in range(i, n + 1, i):
                    is_prime[j] = False
                    mu[j] *= -1
                for j in range(i * i, n + 1, i * i):
                    mu[j] = 0
        return mu
    
    def cntCoprime(self, arr):
        max_val = max(arr)
        freq = [0] * (max_val + 1)

        # Frequency count
        for num in arr:
            freq[num] += 1

        # Count numbers divisible by d
        divisible_count = [0] * (max_val + 1)
        for d in range(1, max_val + 1):
            for multiple in range(d, max_val + 1, d):
                divisible_count[d] += freq[multiple]

        # Get mobius values
        mu = Solution.mobius_sieve(max_val)

        # Total co-prime pairs using inclusion-exclusion
        coprime_pairs = 0
        for d in range(1, max_val + 1):
            c = divisible_count[d]
            if c >= 2:
                coprime_pairs += mu[d] * (c * (c - 1) // 2)

        return coprime_pairs
