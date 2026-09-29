class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        nummy = sorted(set(nums))
        k = len(nummy)
        # Even though we found the length of unique elements from the given array we need to set the original array again because we are told to implemment our solution when nums is in place
        # and finally we can return simply the length of nummy or k(shortly)
        for i in range(k):
            nums[i] = nummy[i]
        return k
