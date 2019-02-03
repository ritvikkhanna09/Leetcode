class Solution {
public:
    int evenSum(vector<int>& A){
        int sum=0;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0) sum+=A[i];
        }
        return sum;
    }
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& q) {
        vector<int> result;
        for(int i=0;i<q.size();i++){
            A[q[i][1]]+=q[i][0];
            result.push_back(evenSum(A));
        }
        return result;
    }
};