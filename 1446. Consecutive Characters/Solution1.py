//itertools.groupby is essentially a built-in counter that groups consecutive identical elements together
from itertools import groupby
class Solution:
    def maxPower(self, s: str) -> int:
        max_power = 1
        for char, group in groupby(s):
            max_power = max(max_power, len(list(group)))
        return max_power
