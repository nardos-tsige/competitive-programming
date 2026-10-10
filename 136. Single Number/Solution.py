class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        # place them in dict so if the value is unique return it
        num = Counter(nums)
        for i in nums:
            if num[i] == 1:
                return i
