class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=0;
        int max_so_far=0;
        for(int i=0;i<nums.size();i++){
            if(i==0 || nums[i]>nums[i-1]){
                count++;
                max_so_far=max(max_so_far,count);
            }else
                count=1;
        }
        return max_so_far;
    }
};