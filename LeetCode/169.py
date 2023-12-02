class Solution(object):
    def majorityElement(self, nums):
        keys = set(nums)
        result = 0

        for i in keys:
            if nums.count(i) > len(nums) / 2:
                result = i
                break
        
        return result