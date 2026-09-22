class Solution:
    def dominantIndex(self, nums: list[int]) -> int:
        max_val = max(nums)
        max_idx = nums.index(max_val)
        
        for num in nums:
            if num == max_val:
                continue
            
            if max_val < 2 * num:
                return -1
                
        return max_idx
