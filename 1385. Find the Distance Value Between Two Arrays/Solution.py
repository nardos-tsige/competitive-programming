class Solution:
    def findTheDistanceValue(self, arr1: list[int], arr2: list[int], d: int) -> int:
        arr2.sort()
        count = 0
        
        for num in arr1:
            it = bisect.bisect_left(arr2, num)
            valid = True
            
            if it < len(arr2) and abs(arr2[it] - num) <= d:
                valid = False
                
            if it > 0 and abs(arr2[it - 1] - num) <= d:
                valid = False
                
            if valid:
                count += 1
                
        return count
