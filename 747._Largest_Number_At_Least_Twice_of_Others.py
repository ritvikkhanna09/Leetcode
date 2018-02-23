class Solution:
    def dominantIndex(self, nums):
        maxx=0
        for i in range(len(nums)):
            if nums[i]>maxx:
                maxx=nums[i]
                indexx=i
        print(nums[:indexx]+nums[indexx+1:])
        for i in (nums[:indexx]+nums[indexx+1:]):
            if i*2>maxx:
                return -1
        return indexx