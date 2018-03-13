class Solution:
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        result=[]
        l=[0]*len(nums)
        for i in nums:
            l[i-1]=l[i-1]+1
        for i in range(len(l)):
            if l[i]==0:
                result.append(i+1)
        return result