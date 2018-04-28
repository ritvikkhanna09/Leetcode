class Solution(object):
    def productExceptSelf(self, nums):
        vals = [1] * len(nums)
        for i in xrange(1, len(nums)):
            vals[i] = nums[i-1] * vals[i-1]
        rverse_prdct = 1 
        for j in xrange(len(nums)-2, -1, -1):
            rverse_prdct *= nums[j+1]
            vals[j] = vals[j] * rverse_prdct
        return vals 