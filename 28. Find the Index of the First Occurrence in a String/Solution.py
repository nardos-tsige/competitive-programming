class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        for i in range(len(haystack)):
          # As the next element check up is improved, interval of checking also must be add at each step
            if haystack[i:i+len(needle)] == needle:
                return i
        return -1
