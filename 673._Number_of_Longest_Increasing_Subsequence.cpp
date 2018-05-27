class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        vector<int> count(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(dp[i]<dp[j]+1){
                        dp[i]++;
                        count[i]=count[j];
                    }else if(dp[i]==dp[j]+1)
                        count[i]+=count[j];
                }
            }
        }
        int maxl=0;
        for(int i=0;i<nums.size();i++){
            if(maxl<dp[i])
                maxl=dp[i];
        }
        int result=0;
        for(int i=0;i<nums.size();i++){
            if(maxl==dp[i])
                result+=count[i];
        }
        return result;
    }
};