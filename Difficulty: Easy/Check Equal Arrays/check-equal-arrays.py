class Solution:
    def checkEqual(self, a, b) -> bool:
        #code here
        return sorted(a) == sorted(b)