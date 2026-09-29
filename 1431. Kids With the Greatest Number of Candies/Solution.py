class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        arr = []
        largest = candies[0]
        for i in range(len(candies)):
            if (candies[i] > largest):
                largest = candies[i]
        for j in range(len(candies)):
            if (candies[j] + extraCandies >= largest):
                arr.append(True)
            else:
                arr.append(False)
        return arr
