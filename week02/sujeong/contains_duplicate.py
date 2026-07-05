# 217. Contains Duplicate
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        x = len(nums)
        y = len(list(set(nums)))

        if x==y:
            return False
        else:
            return True
