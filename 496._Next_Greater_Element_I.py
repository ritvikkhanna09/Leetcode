class Solution:
    def nextGreaterElement(self, nums1, nums2):
        result=[]
        for i in nums1:
            flag=0
            ind=nums2.index(i);
            for j in nums2[ind:]:
                if j>i:
                    result.append(j)
                    flag=1
                    break
            if flag==0:
                result.append(-1)
        return result