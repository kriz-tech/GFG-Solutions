# User function Template for python3

class Solution:
    # Function to reverse words in a given string.
    def reverseWords(self, s):
        # code here 
        words = s.split();
        reversed_s = words[::-1]
        return ' '.join(reversed_s)
        