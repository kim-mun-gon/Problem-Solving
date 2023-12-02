class Solution(object):
    def merge(self, nums1, m, nums2, n):

        del nums1[m:]
        del nums2[n:]

        nums1 += nums2
        nums1.sort()
