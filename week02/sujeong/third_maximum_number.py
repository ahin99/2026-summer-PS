#414. Third Maximum Number
class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums = list(set(nums))
        for i in range(0, len(nums)-1):
            for j in range(len(nums)-1, i, -1):
                if nums[j-1]<nums[j]:
                    tmp = nums[j]
                    nums[j] = nums[j-1]
                    nums[j-1] = tmp

        if len(nums) >= 3:
            return nums[2]
        else:
            return nums[0]  
