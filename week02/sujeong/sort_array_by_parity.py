# 905. Sort Array By Parity
class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        x = []
        y = []
        for i in range(0, len(nums)):
            if nums[i]%2 == 0:
                x.append(nums[i])
            else:
                y.append(nums[i])
        return x+y
