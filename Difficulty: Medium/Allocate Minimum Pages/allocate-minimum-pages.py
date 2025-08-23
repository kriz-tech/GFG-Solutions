class Solution:
    def findPages(self, arr, k):
        # code here
        n = len(arr)
        
        if n < k:
            return -1
        
        l, h = max(arr), sum(arr)
        
        res = h
        
        def ispossible(mid):
            students = 1
            pages = 0
            
            for num in arr:
                if num + pages > mid:
                    students += 1
                    pages = num
                else:
                    pages += num
                if students > k:
                    return False
                
            return True
        
        while l <= h:
            mid = (l + h) // 2
            if ispossible(mid):
                res = mid
                h = mid - 1
            else:
                l = mid + 1
            
        return res
