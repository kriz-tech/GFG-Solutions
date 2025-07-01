#User function Template for python3
class Solution:
    def isPalindrome(self, s: str) -> bool:
		# code here
		if s == s[::-1]:
		    return True
		return False