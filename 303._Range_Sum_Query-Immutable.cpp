class NumArray {
public:
    vector<int> dp;
    NumArray(vector<int> nums) {
        dp.reserve(nums.size()+1);
        dp[0]=0;
        for(int i=1;i<nums.size()+1;i++){
            dp[i]=dp[i-1]+nums[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        int result=(dp[j+1])-(dp[i]);
        return result;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */