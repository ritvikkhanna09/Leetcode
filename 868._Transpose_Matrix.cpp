class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        if(A.size()==0) return A;
        int n=A.size();
        int m=A[0].size();
        vector<vector<int>> result(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result[i][j]=A[j][i];
            }
        }
        return result;
    }
};