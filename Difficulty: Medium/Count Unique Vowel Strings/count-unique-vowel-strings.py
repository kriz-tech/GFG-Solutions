from math import factorial
from collections import Counter

class Solution:
    def vowelCount(self, s):
        #code here
        vowels = set('aeiou')
        counter = Counter(c for c in s if c in vowels)
        unique_vowels = list(counter.keys())

        if not unique_vowels:
            return 0

    # Number of ways to choose one occurrence for each vowel
        ways_to_choose = 1
        for v in unique_vowels:
            ways_to_choose *= counter[v]
    
    # Multiply by number of permutations of the selected vowels
        total_permutations = ways_to_choose * factorial(len(unique_vowels))
        return total_permutations