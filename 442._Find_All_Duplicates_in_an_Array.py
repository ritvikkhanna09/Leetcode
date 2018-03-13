class Solution:
    def findDuplicates(self, nums):
        result=[]
        l=[0]*len(nums)
        for i in nums:
            l[i-1]=l[i-1]+1
        for i in range(len(l)):
            if l[i]==2:
                result.append(i+1)
        return result