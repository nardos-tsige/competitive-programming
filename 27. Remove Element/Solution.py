class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        num = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[num] = nums[i]
                num += 1
    
        return num
