class Solution:
    def maximumProduct(self, nums):
        nums.sort()
        # print(nums)
        if(nums[0]<0 and nums[1]<0):
            # print(nums[0]*nums[1]*nums[-1])
            # print(nums[-1]*nums[-2]*nums[-3])
            if(nums[0]*nums[1]*nums[-1]>nums[-1]*nums[-2]*nums[-3]):
                return nums[0]*nums[1]*nums[-1]
            else:
                return nums[-1]*nums[-2]*nums[-3]
        else:
            return nums[-1]*nums[-2]*nums[-3]