class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int n=A.size();
        int m=B.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int max_ele=0;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(A[i-1]==B[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    max_ele=max(max_ele,dp[i][j]);
                }else
                    dp[i][j]=0;
            }
        }
        return max_ele;
    }
};