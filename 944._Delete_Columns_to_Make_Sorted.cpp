class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int flag=0;
        int row=A.size();
        int col=A[0].size();
        for(int i=0;i<col;i++){
            for(int j=0;j<row-1;j++){
                if(int(A[j][i])>int(A[j+1][i])){
                    flag++;
                    break;
                }
            }
        }
        return flag;
    }
};