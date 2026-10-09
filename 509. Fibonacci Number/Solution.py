class Solution:
    def fib(self, n: int) -> int:
        if n <= 1:
            return n
    
        prev2, prev1 = 0, 1
    
        for i in range(2, n + 1):
            current = prev1 + prev2
            prev2 = prev1
            prev1 = current
    
        return prev1
