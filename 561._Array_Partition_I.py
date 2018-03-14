class Solution:
    def arrayPairSum(self, nums):
        nums.sort()
        result_sum=0
        for i in range(len(nums),0,-2):
            result_sum=result_sum+min(nums[i-2:i])
        return result_sum