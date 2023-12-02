class Solution(object):
    def search(self, nums, target):
        def binary_search (arr, target, start, end):

            if start > end:
                return -1
            
            mid = (start + end) // 2

            if arr[mid] == target:
                return mid
            elif arr[mid] > target:
                return binary_search(arr, target, start, mid - 1)
            else:
                return binary_search(arr, target, mid + 1, end)
        
        n = len(nums)
        result = binary_search(nums, target, 0, n - 1)
        return result 
        