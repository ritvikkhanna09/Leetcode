class Solution {
public:
    int longestMountain(vector<int>& A) {
        if(A.empty())
            return 0;
        vector<int> L(A.size()),R(A.size());
        L[0]=1;
        for(int i=1;i<A.size();i++){
            if(A[i]>A[i-1])
                L[i]=L[i-1]+1;
            else
                L[i]=1;
        }
        R[R.size()-1]=1;
        for(int i=R.size()-2;i>=0;i--){
            if(A[i]>A[i+1])
                R[i]=R[i+1]+1;
            else
                R[i]=1;
        }
        int max_ele=0;
        for(int i=1;i<A.size()-1;i++){
            if(L[i]>1 && R[i]>1)
                max_ele=max(max_ele,L[i]+R[i]-1);
        }
        return max_ele;
    }
};