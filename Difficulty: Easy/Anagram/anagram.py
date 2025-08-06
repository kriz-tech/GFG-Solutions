class Solution:
    def areAnagrams(self, s1, s2):
       # code here
       from collections import Counter
       
       return Counter(s1) == Counter(s2)