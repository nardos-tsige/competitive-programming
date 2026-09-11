class Solution:
    def totalNumbers(self, digits: List[int]) -> int:
        distinct_numbers = set()
        
        for p in permutations(digits, 3):
            if p[0] != 0 and p[2] % 2 == 0:
                distinct_numbers.add(p)
                
        return len(distinct_numbers)
