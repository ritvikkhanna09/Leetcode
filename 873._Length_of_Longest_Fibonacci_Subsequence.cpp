class Solution {
public:
    int lenLongestFibSubseq(vector<int>& A) {
        unordered_map<int, int> m;
        int N = A.size(), res = 0;
        vector<vector<int>> dp(N,vector<int>(N));
        for (int j = 0; j < N; ++j) {
            m[A[j]] = j;
            for (int i = 0; i < j; ++i) {
                int k;
                if(m.find(A[j] - A[i]) == m.end())
                    k = -1;
                else 
                    k=m[A[j] - A[i]];
                if(A[j] - A[i] < A[i] && k >= 0)
                    dp[i][j] =dp[k][i] + 1;
                else 
                    dp[i][j]=2;
                res = max(res, dp[i][j]);
            }
        }
        return res > 2 ? res : 0;
    }
};