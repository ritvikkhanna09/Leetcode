class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() < 2 || A.size()!=B.size()) return false;
        unordered_map<char,int> m;
        bool dup=false; for (auto& c: A) if (++m[c]>1) dup=true;
        if (A==B) return dup;
        int i=0,N=(int)A.size(),j=N-1;
        while (i<N-1 && A[i]==B[i]) ++i;
        while (j>0   && A[j]==B[j]) --j;
        swap(A[i],A[j]);
        return A==B;
    }
};