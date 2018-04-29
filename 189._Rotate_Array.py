class Solution:
    def rotate(self, nums, k):
        index=len(nums)-k
        nums[:]=nums[index:]+nums[:index]