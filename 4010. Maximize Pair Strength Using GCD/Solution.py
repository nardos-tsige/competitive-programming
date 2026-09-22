class Solution:
    def maxPairStrength(self, nums: list[int]) -> int:
        max_strength = 0
        n = len(nums)
        
        for i in range(n):
            for j in range(i + 1, n):
                a = nums[i]
                b = nums[j]
                strength = (a * b) // (math.gcd(a, b)) ** 2
                max_strength = max(max_strength, strength)
                
        return max_strength
