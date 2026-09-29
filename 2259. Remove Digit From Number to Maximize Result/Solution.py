class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        last_index = -1
        for i in range(len(number)):
            if number[i] == digit:
                last_index = i
                if i + 1 < len(number) and number[i + 1] > number[i]:
                    break
        return number[:last_index] + number[last_index + 1:]
