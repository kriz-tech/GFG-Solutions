class Solution:
    def getLastMoment(self, n, left, right):
        # code here
        max_left = max(left) if left else 0
        max_right = max((n - r for r in right), default=0)
        return max(max_left, max_right)
