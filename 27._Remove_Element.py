class Solution:
    def removeElement(self, nums, val):
        Flag=True
        while(Flag):
            if val in nums:
                nums.remove(val)
            else:
                Flag=False
        return len(nums)