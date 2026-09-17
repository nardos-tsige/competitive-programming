class Solution:
    def longestPalindrome(self, s: str) -> int:
        count = {}
        for c in s:
            if c in count:
                count[c] += 1
            else:
                count[c] = 1
        
        res = 0
        odd = 0
        for v in count.values():
            if v % 2 == 0:
                res += v
            else:
                res += v - 1
                odd = 1
        
        return res + odd
