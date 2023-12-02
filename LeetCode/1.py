'''class Solution(object):
    def twoSum(self, nums, target):
        
        list = []
        for i in nums:
            list.append(target - i)
        
        for i in range(len(nums)):
            if nums[i] in list:
                if i ==  list.index(nums[i]):
                    continue
                return [i, list.index(nums[i])]
'''
class Solution(object):
    def twoSum(self, nums, target):        
        d = {}

        for i, num in enumerate(nums):
            result = target - num
            if result in d:
                return [i, d[result]]
            else:
                d[num] = i        
        