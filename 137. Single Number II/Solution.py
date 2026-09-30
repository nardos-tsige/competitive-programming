class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        
        freq = Counter(nums)
        for num, count in freq.items():
            if count == 1:
                return num
