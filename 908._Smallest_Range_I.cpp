class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mi=INT_MAX, m=0;
        for(int i=0;i<A.size();i++) {
            mi=min(A[i], mi);
            m=max(A[i], m);
        }
        if(mi+K>=m-K) return 0;
        return m-2*K-mi;
    }
};