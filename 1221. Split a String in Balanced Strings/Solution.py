class Solution:
    def balancedStringSplit(self, s: str) -> int:
        count = 0 #tracks how many balanced substrings we've found
        balance = 0#tracks current balance (L = +1, R = -1)
    
        for char in s:
            if char == 'L': #L increases balance
                balance += 1
            else:       #R decreases balance
                balance -= 1
        
            if balance == 0:#here We found a balanced substring!
                count += 1
        return count
