class Solution:
    def moveZeroes(self, nums):
        flag=0
        while(True):
            if 0 in nums:
                nums.remove(0)
                flag+=1
            else:
                break
        for i in range(flag):
            nums.append(0)

        