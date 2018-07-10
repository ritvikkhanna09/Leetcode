class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        vector<int> dp(n+1,0);
        if(n==0)
            return 1;
        if(n==1)
            return 10;
        dp[0]=1;dp[1]=10;
        int x=0;
        int prev=9;
        if(n<=10){
            for(int i=2;i<=n;i++){
                int mul=9-x;
                dp[i]=dp[i-1]+(prev*mul);
                prev*=mul;
                x++;
            }
        }
        return dp[n];
    }
};