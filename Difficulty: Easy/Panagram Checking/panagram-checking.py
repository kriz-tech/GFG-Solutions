#User function Template for python3
import string
class Solution:
    
    #Function to check if a string is Pangram or not.
    def checkPangram(self,s):
        #code here
        s = s.lower().replace(",", "")
        return set(string.ascii_lowercase).issubset(set(s))