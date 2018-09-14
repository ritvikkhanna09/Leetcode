class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int increase = 0, decrease = 0;
        for(int i = 1; i < A.size(); i++){
            if(A[i] > A[i-1]){
                increase++;
            }else if(A[i] < A[i-1]){
                decrease++;
            }
        }
        return increase * decrease == 0;
    }
};