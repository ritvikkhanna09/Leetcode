class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int maxSoFar=A[0], maxEndingHere=A[0];
        for (int i=1;i<A.size();++i){
    	    maxEndingHere= max(maxEndingHere+A[i],A[i]);
    	    maxSoFar=max(maxSoFar, maxEndingHere);	
        }
        return maxSoFar;
    }
};