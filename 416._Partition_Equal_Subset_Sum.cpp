class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto& i:nums)
            sum+=i;
        if(sum%2==1)
            return false;
        sum/=2;
        vector<vector<bool>> dp(nums.size()+1,vector<bool>(sum+1,false));
        for(int i=0;i<nums.size()+1;i++)
            dp[i][0]=true;
        for(int i=1;i<sum+1;i++)
            dp[0][i]=false;
        for(int i=1;i<nums.size()+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]<=j)
                    dp[i][j]=(dp[i-1][j]||dp[i-1][j-nums[i-1]]);
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[nums.size()][sum];
    }
};