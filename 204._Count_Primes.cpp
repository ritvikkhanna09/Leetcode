class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<int> dp(n,0);
        for(int i=2;i<n;i++){
            if(dp[i]==0){
                count++;
                for(int j=2;i*j<n;j++){
                    dp[i*j]=1;
                }
            }
        }
        return count;
    }
};