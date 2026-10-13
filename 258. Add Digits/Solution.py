class Solution:
    def addDigits(self, num: int) -> int:
        #keep looping until we have a single digit
        while num >= 10:
            total = 0
            #sum all digits of current number
            for digit in str(num):
                total += int(digit)
            num = total
        return num
