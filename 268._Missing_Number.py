class Solution:
    def missingNumber(self, nums):
        nums.sort()
        for i in range(len(nums)):
            if i != nums[i]:
                return i
        return i+1
        

# CPP sol
# // class Solution {
# // public:
# //     int missingNumber(vector<int>& nums) {
# //         int i,len=nums.size();
# //         std::sort (nums.begin(),nums.end());
# //         for(i=0;i<len;i++){
# //             if(i!=nums[i]){
# //                 return i;
# //             }else{
# //                 continue;
# //             }
# //         }
# //         return i;
# //     }
# // };