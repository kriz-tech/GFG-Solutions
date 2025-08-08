class Solution:
	def getLPSLength(self, s):
		# code here
        n = len(s)
        lps = [0] * n  # lps[i] stores longest prefix-suffix length for s[:i+1]
        
        length = 0  # length of previous longest prefix-suffix
        i = 1
        
        while i < n:
            if s[i] == s[length]:
                length += 1
                lps[i] = length
                i += 1
            else:
                if length != 0:
                    length = lps[length - 1]  # fallback
                else:
                    lps[i] = 0
                    i += 1
        
        return lps[-1] 
		