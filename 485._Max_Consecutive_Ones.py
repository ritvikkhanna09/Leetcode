class Solution:
    def findMaxConsecutiveOnes(self, nums):
        count=[]
        flag=0
        for i in nums:
            if(i==1):
                flag+=1
            elif (i==0):
                count.append(flag)
                flag=0
            count.append(flag)
            
        return max(count)