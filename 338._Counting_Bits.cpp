class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1,0);
        for(int i=1;i<num+1;i++){
            dp[i]=dp[i/2]+i%2;
        }
        return dp;
    }
};
