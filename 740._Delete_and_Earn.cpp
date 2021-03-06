class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.size()==0) return 0;
        std::vector<int> a(10001,0);
        for(int i:nums){
            ++a[i];
        }
        
        std::vector<int> dp(a.size()+1,0);
        dp[1]=a[1]*1;
        
        for(int i=2;i<=10000;++i){
            dp[i]=std::max(dp[i-1],a[i]*i+dp[i-2]);
        }
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i:dp){
            cout<<i<<" ";
        }
        return dp[10000];
    }
};