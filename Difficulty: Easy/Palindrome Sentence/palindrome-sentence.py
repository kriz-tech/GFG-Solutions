import re
class Solution:
	def isPalinSent(self, s):
		# code here
		s = re.sub(r'[^a-zA-Z0-9]', "", s).lower()
		return s == s[::-1]