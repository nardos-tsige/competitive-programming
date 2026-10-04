class Solution:
    def firstUniqChar(self, s: str) -> int:
        st = Counter(s)
        for i, char in enumerate(st):
            if st[char] == 1:
                return i
        #only capturing the 1st character if there is no, return -1
        return -1
