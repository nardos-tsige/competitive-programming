class Solution:
    def reverseDegree(self, s: str) -> int:
        total = 0
        for i, char in enumerate(s):
            reverse_index = 26 - (ord(char) - ord('a'))
            total += reverse_index * (i + 1)
        return total
