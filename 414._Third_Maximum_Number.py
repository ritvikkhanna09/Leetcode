class Solution:
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums=list(set(nums))
        nums.sort()
        # print(nums)
        if len(nums)>=3:
            return nums[-3]
        return nums[-1]
        

"""
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        std::set<int> myset(nums.begin(),nums.end());
        //a set resorts itself// std::sort(myset.begin(),myset.end());
        std::vector<int> myvec(myset.begin(),myset.end());
        if(myvec.size()<3)
            return myvec[myvec.size()-1];
        return myvec[myvec.size()-3];
    }
};
"""