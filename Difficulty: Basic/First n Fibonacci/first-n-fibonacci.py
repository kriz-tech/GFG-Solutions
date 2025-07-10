#User function Template for python3

class Solution:
    #Function to return list containing first n fibonacci numbers.
    def fibonacciNumbers(self,n):
        # your code here
        if n <= 0:
            return []
        if n == 1:
            return [0]
            
        fib = [0, 1]
        
        for i in range(2, n):
            fib.append(fib[-1] + fib[-2])
        
        return fib