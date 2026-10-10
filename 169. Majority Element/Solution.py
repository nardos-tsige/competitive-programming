class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        return sorted(nums)[len(nums)//2] #  The majority number is the number that takes the majority of the space of the 
        # given array--sorting them makes the same elements together
