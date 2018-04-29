class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        h = {}
        for i, num in enumerate(nums):
            if num in h and i - h[num] <= k:
                return True
            h[num] = i
        return False