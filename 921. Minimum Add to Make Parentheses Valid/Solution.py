class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        open = 0
        adds = 0
        for c in s:
            if (c == '(') :
                open += 1
            else:
                if (open > 0):
                    open -= 1
                else:
                    adds += 1
        return open + adds
