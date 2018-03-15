class Solution:
    def singleNumber(self, nums):
        lei=[]
        for i in nums:
            if i not in lei:
                lei.append(i)
            elif i in lei:
                lei.remove(i)
        return lei[0]