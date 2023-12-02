nums = [2, 2, 2, 2, 2]

nums.sort()

length = len(nums)


for i in range(1, len(nums)):
    if nums[i] == nums[i -1]:
        print(i)
        break