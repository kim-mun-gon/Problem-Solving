class Solution(object):
    def largestNumber(self, nums):
        nums = list(map(str, nums))

        for i in range(1, len(nums)):
            for j in range(i, 0, -1):
                if nums[j-1] + nums[j] < nums[j] + nums[j-1]:
                    nums[j-1], nums[j] = nums[j], nums[j-1]
        
        if nums[0] == "0":
            return "0"
        else:
            return (''.join(nums))
        