class Solution:
    def findDuplicates(self, nums: list[int]) -> list[int]:
        return [x for x, count in Counter(nums).items() if count == 2]
