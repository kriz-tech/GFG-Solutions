class Solution():
    def longestString(self, words):
        # code here
        word_set = set(words)
        words.sort()
        
        res = ""
        
        for word in words:
            if all(word[:i] in word_set for i in range(1, len(word))):
                if len(word) > len(res):
                    res = word
                
        return res
                
        
        