class Solution:
    def countCommas(self, n: int) -> int:
        total = 0
        k = 1
        while 10**(3*k) <= n:
            low = 10**(3*k)
            high = min(n, 10**(3*k+3) - 1)
            count = high - low + 1
            total += k * count
            k += 1
        return total        
