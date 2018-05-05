class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sum_left=0,sum_right=0;
            for(int j=0;j<i;j++)
                sum_left+=nums[j];
            for(int j=i+1;j<nums.size();j++)
                sum_right+=nums[j];
            if (sum_left==sum_right)
                return i;
        }
        return -1;
    }
};