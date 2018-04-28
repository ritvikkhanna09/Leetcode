class Solution:
    def findPairs(self, nums, k):
        if k < 0:
            return 0
        elif k == 0:
            return len(set([i for i in nums if nums.count(i)>1]))
        else:
            nums = list(set(nums))
            x = [i-k for i in nums] + nums
            return len(x)-len(set(x))