class Solution:
    def smallestIndex(self, nums: list[int]) -> int:
        for i, num in enumerate(nums):
            digit_sum = 0
            temp = num
            
            while temp > 0:
                digit_sum += temp % 10
                temp //= 10
                
            if digit_sum == i:
                return i
                
        return -1
      
